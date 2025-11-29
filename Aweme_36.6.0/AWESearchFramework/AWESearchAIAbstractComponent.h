@class AWEAwemeModel, NSString, UIView, UIImageView, NSDictionary, AWESearchEventDispather, UILabel, AWESearchAIBotAbstractComponentModel;
@protocol AWESearchBusinessVideoPlayerComponentProvider, AWESearchContainerProtocol, AWESearchComponentProtocol;

@interface AWESearchAIAbstractComponent : AWESearchComponent <AWESearchAIAbstractComponentProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *aiImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (weak, nonatomic) id<AWESearchBusinessVideoPlayerComponentProvider> playerProvider;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWESearchAIBotAbstractComponentModel *abstractModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (copy, nonatomic) NSDictionary *dictLogExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;

- (long long)searchAIAbstract;
- (void)componentDidLoad;
- (void)aiChatButtonClick;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewDidStartShowing;
- (void)componentViewLayoutSubviews;
- (id)provideProtocol;
- (void)trackSearchResultClick;
- (void)abstractTapped:(id)a0;
- (void).cxx_destruct;
- (id)componentView;

@end

@class NSString, AWEAwemeModel, UILabel, UIView, AWEDCFeedPageContext;

@interface AWEMVCardLabelResource : NSObject <AWEMVCardViewResourceProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEDCFeedPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)themeDidChange:(long long)a0;
- (id)initWithContext:(id)a0 model:(id)a1;
- (void)refreshWithAwemeModel:(id)a0 context:(id)a1 containerElement:(id)a2;
- (void).cxx_destruct;
- (void)reset;
- (void)setupViews;

@end

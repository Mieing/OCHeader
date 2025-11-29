@class UIView, NSString, AWEGeneralSearchModel, UIImageView, CAShapeLayer, NSDictionary, AWESearchEventDispather, UILabel;
@protocol AWESearchContainerProtocol, AWESearchComponentProtocol;

@interface AWESearchVideoSourceComponent : AWESearchComponent <AWESearchVideoSourceComponentProtocol, AWESearchComponentBusinessProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *videoSourceTextLabel;
@property (retain, nonatomic) UIImageView *videoCoverImageView;
@property (retain, nonatomic) UIImageView *playIcon;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) CAShapeLayer *roundRectLayer;
@property (nonatomic) BOOL currentModelFromSetupModelOnly;
@property (retain, nonatomic) AWEGeneralSearchModel *bindedModel;
@property (copy, nonatomic) NSString *referString;
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
+ (struct CGSize { double x0; double x1; })p_calculateComponentSize:(double)a0 withModel:(id)a1;

- (void)updateWithReferString:(id)a0;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)addTapGesture;
- (id)fetchSearchParams;
- (id)p_context;
- (void)sendClickEvent;
- (void)p_updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)sendFeedEnterEvent;
- (id)fetchFeedDetailExtraInfo;
- (id)getHashtagExcludedVideoDesc:(id)a0;
- (void)videoSourceTapped:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)componentView;
- (void)setupUI;

@end

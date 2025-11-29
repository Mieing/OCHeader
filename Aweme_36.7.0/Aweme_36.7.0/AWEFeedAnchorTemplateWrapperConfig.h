@class NSObject, UIView;
@protocol AWEFeedTemplateAnchorBaseConfigProtocol;

@interface AWEFeedAnchorTemplateWrapperConfig : AWEFeedAnchorBaseConfig

@property (retain, nonatomic) UIView *bizAnchorView;
@property (retain, nonatomic) NSObject<AWEFeedTemplateAnchorBaseConfigProtocol> *bizConfig;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:(id)a0 extraInfo:(id)a1;
+ (BOOL)enableABTest;
+ (id)templateAnchorDataCheckFailReason:(id)a0;
+ (BOOL)isEmptyInfo:(id)a0;
+ (BOOL)lengthOverLimit:(id)a0;
+ (double)getTitleMaxLen:(id)a0;
+ (id)anchorType;

- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:(id)a0 needPerformOnDisplay:(BOOL)a1;
- (void)parentViewForAnchorContainerWillShowOnScreen;
- (BOOL)useNewStyle;
- (id)anchorViewType;
- (id)anchorViewWithModel:(id)a0;
- (id /* block */)layoutWithAwemeModel:(id)a0 commonLayoutInfo:(id)a1;
- (double)maxAnchorViewWidth;
- (void)setContainerStyle;
- (double)maxAnchorViewWidthForFeed;
- (id)getBizConfigByProtocol:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end

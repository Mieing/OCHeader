@class AWEIMMessageBindButtonInfoModel;

@interface AWEIMMessageBottomQuickReplyComponent : AWEIMFlexComponent

@property (nonatomic) long long exp;
@property (retain, nonatomic) AWEIMMessageBindButtonInfoModel *model;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (id)p_bgColor;
- (void)p_trackShow;
- (id)p_borderColor;
- (void)p_createPresenterIfNeed;
- (void)p_track:(id)a0 params:(id)a1;
- (id)p_textColor;
- (double)p_borderWidth;
- (void)p_showQuickReplyList;
- (void)p_hiddenQuickReplyList;
- (void)p_trackClick:(id)a0;
- (id)p_generateBtnProps:(id)a0;
- (void)singleBtnTapAction:(id)a0;
- (void).cxx_destruct;

@end

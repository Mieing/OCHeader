@class UIView;

@interface WCFinderCommentIdentityActionSheetView : WCActionSheet

@property (retain, nonatomic) UIView *tipsCustomView;
@property (retain, nonatomic) UIView *finderCustomView;
@property (retain, nonatomic) UIView *wechatCustomView;
@property (nonatomic) unsigned long long initizlizeSelectedType;

- (double)heightOfWholeSheet;
- (double)getCustomView:(double)a0;
- (id)getTipsActionSheetView;
- (id)getFinderActionSheetView;
- (id)getWeChatActionSheetView;
- (id)getContentViewWithFinder:(id)a0 wechatContact:(id)a1;
- (void)tapFinderActionSheetCell;
- (void)tapWeChatActionSheetCell;
- (void).cxx_destruct;

@end

@class UIImageView, UIView;

@interface WCFinderLiveCommentBlurButtonBackView : WCLiveBlurButtonBackView

@property (nonatomic) BOOL isOpenPivateMsg;
@property (nonatomic) BOOL isDisplayPivateMsg;
@property (retain, nonatomic) UIView *privateMsgAreaView;
@property (retain, nonatomic) UIView *seperateLineView;
@property (retain, nonatomic) UIImageView *privateMsgIconView;

- (void)layoutUI;
- (void)layoutPrivateMsgAreaView;
- (void)layoutSeperateLineView;
- (void)layoutPrivateMsgIconView;
- (void)updateUIForOpenPrivateMsgChanged;
- (void)updateUIForDisplayPrivateMsgChanged;
- (void)updateOpenPivateMsgWithPercent:(double)a0;
- (void)forceLayoutIfNeed;
- (void).cxx_destruct;

@end

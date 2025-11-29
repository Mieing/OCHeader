@class NSString, UIScrollView, UIView, UIButton;
@protocol MMScrollActionSheetContainerViewDelegate;

@interface MMScrollActionSheetContainerView : UIView <UIScrollViewDelegate>

@property (weak, nonatomic) id<MMScrollActionSheetContainerViewDelegate> delegate;
@property (retain, nonatomic) UIScrollView *bodyView;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *bodyFooterView;
@property (retain, nonatomic) UIView *bodyFooterView2;
@property (retain, nonatomic) UIView *curMaskView;
@property (retain, nonatomic) UIButton *voiceoverExitButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)reloadMaskView;
- (void)addActionSheetHeader:(id)a0;
- (void)addActionSheetFooter:(id)a0;
- (void)addActionSheetBodyFooter:(id)a0;
- (void)addActionSheetBodyFooter2:(id)a0;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)a0;
- (void)onClickVoiceOverExitButton;
- (void).cxx_destruct;

@end

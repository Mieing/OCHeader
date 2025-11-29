@class UIButton;
@protocol WCMomentsShareScopeSectionFooterDelegate;

@interface WCMomentsShareScopeSectionFooterView : UICollectionReusableView

@property (retain, nonatomic) UIButton *modifyScopeButton;
@property (weak, nonatomic) id<WCMomentsShareScopeSectionFooterDelegate> delegate;

+ (double)footerHeightForIsBlank:(BOOL)a0;
+ (double)footerMarginTopForIsBlank:(BOOL)a0;

- (void)updateViewWithIsBlank:(BOOL)a0;
- (void)_onClickModifyScopeButton:(id)a0;
- (void)_initView;
- (void).cxx_destruct;

@end

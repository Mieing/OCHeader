@class MMBrandHeadImageView, CContact, BizProfileV2Resp, UIImageView, UIButton, MMUILabel;
@protocol WCBrandPageSheetTitleViewDelegate;

@interface WCBrandPageSheetTitleView : UIView

@property (retain, nonatomic) CContact *brandContact;
@property (retain, nonatomic) BizProfileV2Resp *cacheItem;
@property (retain, nonatomic) MMBrandHeadImageView *brandAvatarView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *nickNameLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIButton *headerButton;
@property (weak, nonatomic) id<WCBrandPageSheetTitleViewDelegate> delegate;

- (id)init;
- (void)updateUICompts;
- (void)initSubviews;
- (void)showTitleWithText:(id)a0;
- (void)showProfileEntry;
- (void)swithUIStatusWithEntryShowState:(BOOL)a0;
- (void)layoutSubviews;
- (void)onViewClick;
- (void).cxx_destruct;

@end

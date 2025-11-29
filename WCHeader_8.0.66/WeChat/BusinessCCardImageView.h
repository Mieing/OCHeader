@class CPushContact, CardImgItemInfo, MMUIButton;

@interface BusinessCCardImageView : MMUIImageView

@property (retain, nonatomic) CardImgItemInfo *businessCardItem;
@property (retain, nonatomic) MMUIButton *showVerifyImgBtn;
@property (retain, nonatomic) CPushContact *contact;

- (void).cxx_destruct;

@end

@class NewCardItemViewData, PaymentCollapseData, TextViewData, NSMutableArray, ImageViewData;

@interface PaymentSelectPageData : WXPBGeneratedMessage

@property (retain, nonatomic) ImageViewData *backImage;
@property (retain, nonatomic) TextViewData *title;
@property (retain, nonatomic) TextViewData *subTitle;
@property (retain, nonatomic) NSMutableArray *card;
@property (retain, nonatomic) NewCardItemViewData *newCard;
@property (retain, nonatomic) NSMutableArray *multiNewCard;
@property (retain, nonatomic) PaymentCollapseData *paymentCollapse;

+ (void)initialize;

@end

@class NSString, UIImageView, UIImage, UILabel, WCCardData, UIView;

@interface WCCardInvoiceCellView : MMUIView

@property (retain, nonatomic) WCCardData *cardData;
@property (retain, nonatomic) UIImageView *backDefaulImageView;
@property (retain, nonatomic) UIImage *defaulDefaulImage;
@property (retain, nonatomic) UILabel *topLabel;
@property (retain, nonatomic) UILabel *bottomLabel;
@property (retain, nonatomic) UILabel *moneyLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) NSString *backImageURL;
@property (retain, nonatomic) NSString *topText;
@property (retain, nonatomic) NSString *bottomText;
@property (retain, nonatomic) NSString *moneyText;
@property (retain, nonatomic) NSString *timeText;

+ (double)itemViewHieght;
+ (double)CardItemViewTopHeight;

- (id)initWithCardData:(id)a0;
- (void)layoutSubviews;
- (void)confiUI;
- (id)getBrandColor;
- (id)scaleToTop:(id)a0 scale:(double)a1;
- (id)scaleToBottom:(id)a0 scale:(double)a1;
- (void).cxx_destruct;

@end

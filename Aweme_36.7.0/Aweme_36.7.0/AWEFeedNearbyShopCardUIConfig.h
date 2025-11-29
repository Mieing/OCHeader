@class UIColor, NSString, NSArray, UIImage;

@interface AWEFeedNearbyShopCardUIConfig : NSObject

@property (nonatomic) BOOL isEnhancedContennt;
@property (retain, nonatomic) UIColor *shopCardDetailBGColor;
@property (retain, nonatomic) UIColor *shopCardDetailLabelColor;
@property (retain, nonatomic) UIImage *arrowIconImg;
@property (retain, nonatomic) UIImage *locationIcon;
@property (copy, nonatomic) NSString *locationIconBGCDNPath;
@property (copy, nonatomic) NSString *locationIconBGCDNName;
@property (retain, nonatomic) UIImage *contentBGImg;
@property (copy, nonatomic) NSString *contentBGCDNPath;
@property (copy, nonatomic) NSString *contentBGCDNName;
@property (retain, nonatomic) UIImage *shopIconImg;
@property (retain, nonatomic) UIImage *shopTextImg;
@property (copy, nonatomic) NSArray *gradientBGColors;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end

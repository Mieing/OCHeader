@class NSString, HTSLiveImage;

@interface GiftSearchConfig : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL closeGiftPanel;
@property (nonatomic) BOOL isNormalSearch;

+ (id)descriptor;

@end

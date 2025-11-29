@class NSString, HTSLiveImage;

@interface HTSLiveBonusBanner : IESLivePBBaseMessage

@property (nonatomic) int statusType;
@property (copy, nonatomic) NSString *statusDesc;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;

+ (id)descriptor;

@end

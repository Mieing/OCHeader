@class NSString, NSDictionary;

@interface AWEShareQRImageResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *shareScene;
@property (copy, nonatomic) NSDictionary *activityInfo;
@property (copy, nonatomic) NSString *confirmButtonText;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL hidePopup;
@property (copy, nonatomic) NSString *popupCover;
@property (copy, nonatomic) NSString *reflowFailToast;

+ (id)activityInfoJSONTransformer;
+ (id)shareUserInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

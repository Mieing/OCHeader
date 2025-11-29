@class NSString, NSArray;

@interface AWEUGCountDownViewFinishConfig : NSObject

@property (nonatomic) long long resourceType;
@property (copy, nonatomic) NSString *iconImageUrl;
@property (copy, nonatomic) NSString *iconLottieUrl;
@property (copy, nonatomic) NSString *iconLottieMD5;
@property (nonatomic) long long lottiePlayType;
@property (copy, nonatomic) NSString *closeImageUrl;
@property (nonatomic) BOOL hasFeedBack;
@property (copy, nonatomic) NSString *labelText;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) unsigned long long schemaJumpType;
@property (copy, nonatomic) NSArray *feedBackSchemaList;
@property (nonatomic) BOOL unDismissWithoutFBSchema;

- (void).cxx_destruct;

@end

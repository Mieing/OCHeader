@class NSString, NSDictionary, AWEShareSchemaDetailModel, NSNumber, AWEURLModel;

@interface AWEShareTokenHandlerResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSNumber *schemaType;
@property (copy, nonatomic) NSString *shareScene;
@property (copy, nonatomic) NSDictionary *activityInfo;
@property (copy, nonatomic) NSString *popupCover;
@property (retain, nonatomic) AWEShareSchemaDetailModel *schemaDetail;
@property (copy, nonatomic) NSString *shareUserID;
@property (copy, nonatomic) NSString *shareUserName;
@property (nonatomic) long long shareUserIID;
@property (retain, nonatomic) NSNumber *shareUserDid;
@property (retain, nonatomic) AWEURLModel *shareUserAvatar;
@property (copy, nonatomic) NSString *command;
@property (copy, nonatomic) NSString *relationFrom;
@property (copy, nonatomic) NSString *shareSDK;
@property (copy, nonatomic) NSString *subheadTemplate;
@property (copy, nonatomic) NSString *secUserId;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (nonatomic) BOOL hidePopup;
@property (copy, nonatomic) NSString *confirmButtonText;
@property (copy, nonatomic) NSDictionary *linkInfo;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSString *reflowFailToast;

+ (id)activityInfoJSONTransformer;
+ (id)extraDictJSONTransformer;
+ (id)linkInfoJSONTransformer;
+ (id)conversationCellInfoModelJSONTransformer;
+ (id)schemaDetailJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

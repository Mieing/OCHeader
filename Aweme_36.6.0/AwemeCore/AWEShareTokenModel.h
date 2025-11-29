@class NSString, NSArray, NSDictionary, UIImage;

@interface AWEShareTokenModel : NSObject

@property (copy, nonatomic) NSString *itemName;
@property (copy, nonatomic) NSArray *itemNames;
@property (copy, nonatomic) NSString *optionalParam;
@property (copy, nonatomic) NSString *optionalParam3;
@property (copy, nonatomic) NSString *tokenDescription;
@property (copy, nonatomic) NSDictionary *activityInfo;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSString *extraParamsString;
@property (copy, nonatomic) NSDictionary *schemaExtraParams;
@property (nonatomic) long long schemaType;
@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) UIImage *tokenAlertTopImage;
@property (copy, nonatomic) NSString *shareScene;
@property (copy, nonatomic) NSDictionary *degradeTokenDic;
@property (copy, nonatomic) NSDictionary *shareChannelConfig;
@property (copy, nonatomic) NSString *schema;

- (void)addExtraParamsWithKey:(id)a0 value:(id)a1;
- (void).cxx_destruct;

@end

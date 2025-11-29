@class NSString, NSDictionary;

@interface AWEBatManInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long batManPackageId;
@property (copy, nonatomic) NSString *gameDeveloper;
@property (copy, nonatomic) NSString *gameIcon;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *packageName;
@property (nonatomic) BOOL useMiniApk;
@property (copy, nonatomic) NSString *versionName;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

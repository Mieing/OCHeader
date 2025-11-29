@class NSString, NSArray, AWEURLModel;

@interface AWETrendMaterialModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long materialType;
@property (copy, nonatomic) NSString *materialID;
@property (copy, nonatomic) NSString *sucaiType;
@property (copy, nonatomic) NSString *materialName;
@property (copy, nonatomic) NSString *extraInfo;
@property (copy, nonatomic) NSString *followShootButtonText;
@property (copy, nonatomic) NSString *followShootSchema;
@property (retain, nonatomic) AWEURLModel *cover;
@property (nonatomic) long long userCount;
@property (nonatomic) long long mvType;
@property (copy, nonatomic) NSString *nickName;
@property (nonatomic) long long templateType;
@property (nonatomic) long long templateProvider;
@property (copy, nonatomic) NSArray *templateFeature;
@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL isCollectedStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverJSONTransformer;
+ (id)sucaiTypeJSONTransformer;
+ (id)duetFromIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

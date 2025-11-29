@class NSString, NSDictionary, NSArray;

@interface AWEECMallMessageRedTag : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *localUniqID;
@property (nonatomic) BOOL hasRedTagUnderTaked;
@property (nonatomic) long long tagType;
@property (copy, nonatomic) NSString *tagText;
@property (copy, nonatomic) NSString *skipURL;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) BOOL isCompensation;
@property (nonatomic) unsigned long long dataStage;
@property (copy, nonatomic) NSString *bizSource;
@property (copy, nonatomic) NSArray *registerParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)registerParamsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)redDotComponentID;
- (void).cxx_destruct;

@end

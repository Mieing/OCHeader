@class NSString, NSArray;
@protocol IESIMExchangeAnswerResourceProtocol;

@interface AWEIMExchangeAnswerStrategyConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *textURL;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSArray *backgroundColor;
@property (copy, nonatomic) NSArray *backgroundInfo;
@property (copy, nonatomic) NSArray *questionList;
@property (nonatomic) long long priority;
@property (nonatomic) long long randomNum;
@property (nonatomic) BOOL shouldLoadData;
@property (retain, nonatomic) id<IESIMExchangeAnswerResourceProtocol> resourceLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)backgroundInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

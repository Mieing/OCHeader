@class NSString, NSArray, NSDictionary, NSNumber;

@interface IESIMEmoticonThemeModel : MTLModel <MTLJSONSerializing, IESIMEmoticonThemeModelProtocol>

@property (copy, nonatomic) NSString *themeCoverIcon;
@property (retain, nonatomic) NSArray *emoticonArray;
@property (retain, nonatomic) NSArray *limitEmoticonArray;
@property (retain, nonatomic) NSNumber *identifier;
@property (copy, nonatomic) NSString *display_name;
@property (copy, nonatomic) NSString *timeLimitedShowName;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)emoticonArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)convertToAWEEmoticonThemeModel;
- (void).cxx_destruct;

@end

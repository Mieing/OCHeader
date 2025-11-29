@class NSString, NSDictionary;

@interface IESIMEmoticonModel : MTLModel <MTLJSONSerializing, IESIMEmoticonModelProtocol>

@property (copy, nonatomic) NSString *emoticonIcon;
@property (copy, nonatomic) NSString *emoticonTitle;
@property (nonatomic) BOOL hide;
@property (copy, nonatomic) NSString *showName;
@property (nonatomic) BOOL timeLimited;
@property (nonatomic) double startTimestamp;
@property (nonatomic) double endTimestamp;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (id)convertToAWEEmoticonModel;
- (void).cxx_destruct;

@end

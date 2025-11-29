@class NSString, NSDictionary;

@interface AWEStudioLocalLifeNoticeItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *popupSchema;
@property (nonatomic) long long popupType;
@property (copy, nonatomic) NSDictionary *lifeGovernNotice;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

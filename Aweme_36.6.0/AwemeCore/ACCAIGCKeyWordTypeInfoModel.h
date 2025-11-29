@class NSString, NSArray;

@interface ACCAIGCKeyWordTypeInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *keyWords;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long expandType;
@property (copy, nonatomic) NSString *fullWord;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *creativeObjectType;
@property (copy, nonatomic) NSArray *outputResourceTypeArray;
@property (copy, nonatomic) NSString *aigcType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

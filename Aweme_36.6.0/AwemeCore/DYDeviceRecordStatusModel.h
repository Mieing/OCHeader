@class NSString, NSDictionary;

@interface DYDeviceRecordStatusModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long recordStatus;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

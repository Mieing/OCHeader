@class NSString, NSArray;

@interface LLAnniePOIChannelBizSetting : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *bizcode;
@property (retain, nonatomic) NSArray *channels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

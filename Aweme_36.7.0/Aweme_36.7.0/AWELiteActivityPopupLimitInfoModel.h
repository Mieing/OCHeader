@class NSString;

@interface AWELiteActivityPopupLimitInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enableFrequencyCheck;
@property (copy, nonatomic) NSString *frequencyCheckKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

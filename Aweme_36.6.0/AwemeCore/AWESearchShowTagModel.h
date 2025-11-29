@class NSString;

@interface AWESearchShowTagModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long vtagDelayTS;
@property (nonatomic) BOOL vtagEnable;
@property (nonatomic) BOOL vtagDefaultEnable;
@property (copy, nonatomic) NSString *vtagDefaultData;
@property (nonatomic) BOOL inspirationVtagEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)vtagEnableRawValue;
- (void).cxx_destruct;

@end

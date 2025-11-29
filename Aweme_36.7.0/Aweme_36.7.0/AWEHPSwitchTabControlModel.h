@class NSNumber, NSArray, NSString;

@interface AWEHPSwitchTabControlModel : AWEBaseSettingsModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *stackInfoStartIndex;
@property (copy, nonatomic) NSNumber *stackInfoDepth;
@property (copy, nonatomic) NSArray *list;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end

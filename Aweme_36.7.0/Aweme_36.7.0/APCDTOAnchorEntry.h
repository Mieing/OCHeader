@class NSString;

@interface APCDTOAnchorEntry : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isEnabled;
@property (copy, nonatomic) NSString *disabledToast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

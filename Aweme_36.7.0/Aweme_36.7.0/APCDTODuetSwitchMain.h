@class NSString;

@interface APCDTODuetSwitchMain : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL support;
@property (nonatomic) long long defaultMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end

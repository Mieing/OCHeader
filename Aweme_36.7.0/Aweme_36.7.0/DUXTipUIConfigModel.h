@class NSString;

@interface DUXTipUIConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double fontSize;
@property (nonatomic) double leftIconSize;
@property (nonatomic) double rightIconSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)updateValueWithModel:(id)a0;

@end

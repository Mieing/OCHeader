@class NSString;

@interface DUXStepperUIConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double iconSize;
@property (nonatomic) double fontSize;
@property (nonatomic) double lableWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)updateValueWithModel:(id)a0;

@end

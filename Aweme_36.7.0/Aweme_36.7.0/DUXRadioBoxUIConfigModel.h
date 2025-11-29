@class NSString;

@interface DUXRadioBoxUIConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double sizeMedium;
@property (nonatomic) double iconSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)updateValueWithModel:(id)a0;

@end

@class NSString;

@interface DUXBadgeUIConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double dotSize;
@property (nonatomic) double numberSize;
@property (nonatomic) double textSize;
@property (nonatomic) double numberFontSize;
@property (nonatomic) double textFontSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)updateValueWithModel:(id)a0;

@end

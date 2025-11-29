@class NSString;

@interface DUXTagUIConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double fontSizePrimary;
@property (nonatomic) double fontSizeSecondary;
@property (nonatomic) double fontSizeThirdly;
@property (nonatomic) double normalIconSize;
@property (nonatomic) double smallIconSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)updateValueWithModel:(id)a0;

@end

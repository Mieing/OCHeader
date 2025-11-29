@class NSString;

@interface DUXActionSheetUIConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double extensionTitleFontSize;
@property (nonatomic) double extensionDescFontSize;
@property (nonatomic) double itemTitleFontSize;
@property (nonatomic) double itemDescFontSize;
@property (nonatomic) double iconSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)updateValueWithModel:(id)a0;

@end

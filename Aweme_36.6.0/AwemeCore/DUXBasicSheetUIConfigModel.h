@class NSString;

@interface DUXBasicSheetUIConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double titleFontSize;
@property (nonatomic) double buttonFontSize;
@property (nonatomic) double iconButtonSize;
@property (nonatomic) double iconSize;
@property (nonatomic) double dragBarWidth;
@property (nonatomic) double dragBarHeight;
@property (nonatomic) double topArrowSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)updateValueWithModel:(id)a0;

@end

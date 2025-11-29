@class NSString;

@interface DUXInfoPanelUIConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double titleFontSize;
@property (nonatomic) double bodyFontSize;
@property (nonatomic) double linkFontSize;
@property (nonatomic) double actionFontSize;
@property (nonatomic) double switchTitleFontSize;
@property (nonatomic) double closeIconSize;
@property (nonatomic) double arrowIconSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)updateValueWithModel:(id)a0;

@end

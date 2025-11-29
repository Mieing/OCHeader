@class NSString;

@interface DUXDialogUIConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double titleFont;
@property (nonatomic) double bodyFont;
@property (nonatomic) double actionFont;
@property (nonatomic) double linkFont;
@property (nonatomic) double closeButtonSize;
@property (nonatomic) double closeIconSize;
@property (nonatomic) double linkIconSize;
@property (nonatomic) double bottomLinkFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)updateValueWithModel:(id)a0;

@end

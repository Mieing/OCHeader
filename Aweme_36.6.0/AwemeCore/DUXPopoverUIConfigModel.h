@class NSString;

@interface DUXPopoverUIConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double fontSize;
@property (nonatomic) double popoverMenuFontSize;
@property (nonatomic) double linkIconSize;
@property (nonatomic) double leftIconSize;
@property (nonatomic) double leftImageSize;
@property (nonatomic) double popoverMenuActionIconSize;
@property (nonatomic) double popoverMenuOptionIconSize;
@property (nonatomic) double popoverMenuActionHeight;
@property (nonatomic) double popoverMenuOptionHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)updateValueWithModel:(id)a0;

@end

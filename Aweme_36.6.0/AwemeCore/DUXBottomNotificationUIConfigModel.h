@class NSString;

@interface DUXBottomNotificationUIConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double fontSize;
@property (nonatomic) double detailFontSize;
@property (nonatomic) double leftIconSize;
@property (nonatomic) double closeIconSize;
@property (nonatomic) double linkIconSize;
@property (nonatomic) double linkIconSizeNoText;
@property (nonatomic) double smallAvatarSize;
@property (nonatomic) double bigAvatarSize;
@property (nonatomic) double miniHeight;
@property (copy, nonatomic) id /* block */ iconSizeProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)updateValueWithModel:(id)a0;
- (double)iconSizeWithSize:(double)a0;
- (void).cxx_destruct;

@end

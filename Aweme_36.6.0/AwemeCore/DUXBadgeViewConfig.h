@class UIColor, UIFont, NSString, DUXBadgeUIConfigModel;

@interface DUXBadgeViewConfig : NSObject <IESIMBadgeViewConfigProtocol, NSCopying>

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) double badgeSize;
@property (nonatomic) double labelHorizentalMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long maxBadgeNumber;
@property (nonatomic) unsigned long long badgeStyle;
@property (nonatomic) BOOL isStandard;
@property (nonatomic) double originBadgeSize;
@property (retain, nonatomic) DUXBadgeUIConfigModel *uiConfig;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) double badgeSize;
@property (nonatomic) double maxTextBadgeWidth;
@property (nonatomic) long long textBadgeLineBreakMode;
@property (nonatomic) double labelHorizentalMargin;
@property (nonatomic) unsigned long long enlargeType;
@property (nonatomic) unsigned long long sceneStyle;

+ (Class)aDUXBadgeAdapterClass;

- (id)initWithBadgeStyle:(unsigned long long)a0;
- (id)getTextColor;
- (id)initWithBadgeStyle:(unsigned long long)a0 enlargeType:(unsigned long long)a1;
- (id)initWithStandardBadgeStyle:(unsigned long long)a0;
- (id)initWithStandardBadgeStyle:(unsigned long long)a0 enlargeType:(unsigned long long)a1;
- (id)getBackgroundColor;
- (id)initWithBadgeStyle:(unsigned long long)a0 enlargeType:(unsigned long long)a1 isStandard:(BOOL)a2;
- (void)updateBadgeSizeIfNeeded;
- (id)aDUXBadgeAdapter;
- (void).cxx_destruct;
- (id)init;
- (void)setup;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

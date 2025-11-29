@class NSString;

@interface MJActionPanelMainMenuItem : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL activated;
@property (retain, nonatomic) NSString *disabledTipText;
@property (readonly, nonatomic) BOOL isIconColorful;
@property (readonly, nonatomic) NSString *iconName;
@property (readonly, nonatomic) double iconAlpha;

+ (id)titleWithItem:(id)a0;
+ (id)imageNameWithItem:(id)a0;

- (id)initWithType:(unsigned long long)a0;
- (id)initWithType:(unsigned long long)a0 activated:(BOOL)a1;
- (id)initWithType:(unsigned long long)a0 enabled:(BOOL)a1 disabledTipText:(id)a2;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

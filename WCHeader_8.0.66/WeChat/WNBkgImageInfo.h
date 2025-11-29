@class NSString;

@interface WNBkgImageInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *backgroundColor;
@property (nonatomic) float backgroundAlpha;
@property (retain, nonatomic) NSString *fontColor;
@property (nonatomic) float fontAlpha;
@property (retain, nonatomic) NSString *logoColor;
@property (nonatomic) float logoAlpha;
@property (nonatomic) int colorType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_displayName;
+ (void)PBArrayAdd_backgroundColor;
+ (void)PBArrayAdd_backgroundAlpha;
+ (void)PBArrayAdd_fontColor;
+ (void)PBArrayAdd_fontAlpha;
+ (void)PBArrayAdd_logoColor;
+ (void)PBArrayAdd_logoAlpha;
+ (void)PBArrayAdd_colorType;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithFavBkgImageResourceInfo:(id)a0;
- (void).cxx_destruct;

@end

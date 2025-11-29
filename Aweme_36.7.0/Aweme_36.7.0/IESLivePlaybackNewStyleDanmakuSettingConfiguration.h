@interface IESLivePlaybackNewStyleDanmakuSettingConfiguration : NSObject

@property (nonatomic) long long areaType;
@property (nonatomic) long long fontSizeType;
@property (nonatomic) long long alphaPercentValue;
@property (nonatomic) long long areaPercent;
@property (nonatomic) long long speedType;

+ (id)hasLocalKey;
+ (id)areaPercentKey;
+ (id)speedTypeKey;
+ (id)areaTypeKey;
+ (id)fontSizeTypeKey;
+ (id)alphaPercentKey;
+ (id)localConfigIfExist;
+ (id)identifier;

- (void)validateLocalConfigIfNeeded;

@end

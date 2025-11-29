@class NSString, NSArray;

@interface WeChat.SystemAuthCapabilityInfo : NSObject

@property (nonatomic, readonly) void /* unknown type, empty encoding */ capability;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *imageName;
@property (nonatomic, readonly) NSString *settingPageDescription;
@property (nonatomic, readonly) NSString *instruction;
@property (nonatomic, readonly) NSArray *bizInfos;

- (id)initWithCapability:(unsigned int)a0;
- (id)authorizeTipTitleFor:(unsigned long long)a0;
- (BOOL)isOverSeaLocationSensitiveWithScene:(unsigned long long)a0;
- (BOOL)isContainsSceneWithScene:(unsigned long long)a0;
- (id)init;

@end

@class NSDictionary;

@interface IESLiveLinkSettingManager : NSObject

@property (copy, nonatomic) NSDictionary *settingMap;

+ (BOOL)clearLiveCoreLayoutUpdaterBeforeLeaveRoom;
+ (BOOL)safeMutableArrayV2Enable;
+ (id)shared;

- (void)updateSettingMap:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

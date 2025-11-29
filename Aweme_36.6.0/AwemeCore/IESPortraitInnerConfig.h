@class IESPortraitConfig;

@interface IESPortraitInnerConfig : NSObject

@property (nonatomic) BOOL hasLoad;
@property (retain, nonatomic) IESPortraitConfig *config;
@property (nonatomic) long long lastSaveTimeMs;

- (BOOL)needLoad;
- (void).cxx_destruct;
- (id)init;
- (BOOL)needSave;

@end

@interface IESECMallMusicConfigManager : NSObject

@property (nonatomic) BOOL didXtabMallRegisteredMusicConfigHandler;
@property (nonatomic) BOOL didRegisteredMusicConfigHandler;

+ (id)sharedManager;

@end

@class NSString;

@interface IESLiveInteractLipSyncConfig : NSObject

@property (copy, nonatomic) NSString *cacheDir;
@property (nonatomic) int logMask;
@property (nonatomic) int cvAvatarWorkMode;
@property (nonatomic) int cgAvatarWorkMode;
@property (nonatomic) void *resource_finder_t;
@property (copy, nonatomic) NSString *appAssetPath;

- (void).cxx_destruct;

@end

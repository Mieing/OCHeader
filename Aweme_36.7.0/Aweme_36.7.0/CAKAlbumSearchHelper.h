@interface CAKAlbumSearchHelper : NSObject

+ (BOOL)isPermissionGranted;
+ (BOOL)isAIMemoriesPermissionGranted;
+ (BOOL)isSystemAlbumIntelliAlbumSwitchOn;
+ (BOOL)isAIMemoriesPermissionNotDetermined;
+ (void)updateAIMemoriesPermission:(BOOL)a0;
+ (id)isAIMemoriesFirstAuthorizeEnter;
+ (id)isFirstAuthorizeEnterKey;
+ (id)AIMemoriesPermissionCachedKey;
+ (BOOL)hasUserTransferToPreciseKey;
+ (id)AIMemoriesPermissionCachedPreciseKey;
+ (id)AIMemoriesHasUserTransferToPreciseKey;
+ (void)updatePermission:(BOOL)a0;

@end

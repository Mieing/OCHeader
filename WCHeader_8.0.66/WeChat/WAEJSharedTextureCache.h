@class NSMutableDictionary, NSData, NSMutableData, NSMutableArray;

@interface WAEJSharedTextureCache : NSObject {
    NSMutableData *premultiplyTable;
    NSMutableData *unPremultiplyTable;
    NSMutableArray *destroyedTextures;
    NSMutableArray *updateTextures;
}

@property (readonly, nonatomic) NSMutableDictionary *textures;
@property (readonly, nonatomic) NSData *premultiplyTable;
@property (readonly, nonatomic) NSData *unPremultiplyTable;
@property (nonatomic) BOOL isEnterBackground;
@property (nonatomic) BOOL forceReleaseInBg;

- (id)init;
- (void)releaseStoragesOlderThan:(double)a0;
- (void)dealloc;
- (void)addDestroyedTextures:(id)a0;
- (void)releaseDestroyedTextures;

@end

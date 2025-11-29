@class NSMutableDictionary;

@interface AWEFaceStickerManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *faceStickerDic;

+ (id)sharedManager;

- (void)setStickerModel:(id)a0 forId:(id)a1;
- (id)stickerModelForId:(id)a0;
- (void)removeAllStickerModels;
- (void).cxx_destruct;
- (id)init;

@end

@class NSString, NSMutableArray, NSMutableDictionary;

@interface ACCImageEditorNLEImageWrapperIDManager : NSObject

@property (retain, nonatomic) NSMutableArray *stickerLayerIDArray;
@property (retain, nonatomic) NSString *hdrLayerID;
@property (retain, nonatomic) NSString *filterLayerID;
@property (nonatomic) int stickerIDCounter;
@property (retain, nonatomic) NSMutableDictionary *stickerIDIntToStringDict;
@property (retain, nonatomic) NSMutableDictionary *stickerIDStringToIntDict;

- (BOOL)userAddedLayerFlag:(id)a0;
- (id)getHDRLayerID;
- (id)getFilterLayerID;
- (int)generateStickerIntID;
- (id)getStickerLayerIDWithID:(int)a0;
- (void)addStickerLayerID:(id)a0;
- (void)removeStickerLayerID:(id)a0;
- (id)getStickerLayerIDArray;
- (id)generateStickerLayerIDWithIntID:(int)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

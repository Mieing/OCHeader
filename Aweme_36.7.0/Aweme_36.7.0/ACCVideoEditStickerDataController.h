@class NSArray, ACCStickerPannelDataConfig;

@interface ACCVideoEditStickerDataController : NSObject

@property (copy, nonatomic) NSArray *categories;
@property (retain, nonatomic) ACCStickerPannelDataConfig *dataConfig;
@property (nonatomic) BOOL skipMineCategory;

+ (id)mineCategroyModel;
+ (id)emojiCategroyModel;

- (id)merge:(id)a0 recommendResponse:(id)a1 lokiResponse:(id)a2;
- (void)fetchPannelBasicData:(id)a0 completion:(id /* block */)a1;
- (void)fetchPannelData:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end

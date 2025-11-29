@class AWEInfoStickerManager;

@interface ACCInfoStickerCreateModelGenerator : NSObject

@property (retain, nonatomic) AWEInfoStickerManager *stickerManager;

- (id)generateCreateStickerWithSticker:(id)a0;
- (void)generateCreateStickerWithContext:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 completion:(id /* block */)a2;
- (id)generateUserInfoWithStickerModel:(id)a0 tabName:(id)a1;
- (id)generateUserInfoWithThirdPartyModel:(id)a0 tabName:(id)a1 path:(id)a2;
- (void).cxx_destruct;

@end

@class AWEQuickFlashStickerModel;

@interface AWEMusicDetailQuickFlashInspirationModel : AWEMusicDetailInspirationModel

@property (retain, nonatomic) AWEQuickFlashStickerModel *quickFlashStickerModel;

- (unsigned long long)inspirationType;
- (void)updateDataWithResponseModel:(id)a0;
- (id)shootSameDescription;
- (id)inspirationID;
- (void)setupDataWith:(id)a0;
- (void).cxx_destruct;
- (id)title;
- (long long)materialType;
- (id)userCount;
- (BOOL)isDataAvailable;
- (id)coverURL;

@end

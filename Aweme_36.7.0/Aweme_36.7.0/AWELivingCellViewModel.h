@interface AWELivingCellViewModel : AWELiveFeedBaseViewModel

- (BOOL)isFollow;
- (id)vsWatermark;
- (BOOL)isPortraitStream;
- (BOOL)isPremiere;
- (id)headerLeftTagText;
- (id)operationPlaceText;
- (id)coverImageURLArray;
- (id)previewImageUpURLArray;
- (id)previewImageDownURLArray;
- (id)livingStatusText;
- (id)liveEndStatusText;
- (BOOL)hasChaseRecord;
- (BOOL)isOnSubCamera;
- (long long)tagType;
- (id)nameText;
- (id)episode;
- (id)bottomTitle;

@end

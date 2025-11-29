@class NSString, MMAsset;
@protocol GameHaowanAsset;

@interface MMAssetForGameHaowan : MMAsset <GameHaowanAsset> {
    MMAsset<GameHaowanAsset> *_impl;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAssetImpl:(id)a0;
- (id)title;
- (id)subtitle;
- (id)gameName;
- (id)appId;
- (BOOL)isOnlineVideo;
- (id)videoItem;
- (id)assetUrl;
- (id)getThumbImage;
- (id)getThumbnail;
- (id)tipForLoadingUncomplete;
- (BOOL)isGif;
- (BOOL)isPicture;
- (BOOL)isVideo;
- (id)videoDuration;
- (BOOL)getIsEdited;
- (void)asyncGetThumbnail:(id /* block */)a0;
- (void)asyncGetAspectRatioThumbnailWithTargetSize:(struct CGSize { double x0; double x1; })a0 andResult:(id /* block */)a1;
- (void)asyncGetVideoAssetWithBlock:(id /* block */)a0;
- (void)stopICloudActivity;
- (struct CGSize { double x0; double x1; })getImageRatioSize;
- (id)getCreatedDate;
- (void).cxx_destruct;

@end

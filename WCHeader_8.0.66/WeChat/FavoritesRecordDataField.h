@class NSString;

@interface FavoritesRecordDataField : FavoritesItemDataField

@property (retain, nonatomic) NSString *chatName;
@property (nonatomic) unsigned int msgLocalId;
@property (nonatomic) unsigned int msgCreateTime;

+ (id)modelPropertyBlacklistForConfigTag:(id)a0;

- (id)GetThumbPath;
- (id)GetDataPath;
- (id)GetMiddleDataPath;
- (id)GetLivePhotoVideoPath;
- (void).cxx_destruct;

@end

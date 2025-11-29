@class NSString;

@interface GroupNoticeItemDataField : FavoritesItemDataField

@property (retain, nonatomic) NSString *sourceId;
@property (retain, nonatomic) NSString *chatRoomName;

+ (id)convertFromData:(id)a0;

- (id)GetDataPath;
- (id)GetThumbPath;
- (id)GetTmpDataPath;
- (id)GetTmpThumbPath;
- (BOOL)needDownloadData;
- (BOOL)needDownloadThumb;
- (id)uploadIdentifier;
- (void).cxx_destruct;

@end

@class FavoritesItemDataField, NSArray, FavoritesItem, BaseMessageViewModel;

@interface FavDataItemWrap : RecordNodeDataSource {
    NSArray *m_dataList;
}

@property (retain, nonatomic) BaseMessageViewModel *messageViewModel;
@property (retain, nonatomic) FavoritesItemDataField *dataItem;
@property (retain, nonatomic) FavoritesItem *parent;
@property (nonatomic) unsigned int index;

- (id)initWithParent:(id)a0 DataItem:(id)a1 Index:(unsigned int)a2;
- (id)initWithParent:(id)a0 DataItem:(id)a1 dataList:(id)a2 Index:(unsigned int)a3;
- (unsigned long long)getParserType;
- (id)GetParent;
- (id)GetDataItem;
- (unsigned int)GetParentLocalID;
- (unsigned int)GetImageAndVideoIndex;
- (int)GetImageDataDownloadStatus;
- (int)GetParentDownloadStatus;
- (id)GetImgAndVideoArray;
- (id)GetMusicInfo;
- (BOOL)StartDownload;
- (void).cxx_destruct;

@end

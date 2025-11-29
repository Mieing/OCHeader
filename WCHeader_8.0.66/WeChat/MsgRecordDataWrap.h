@class FavoritesItemDataField, NSString, NSArray, CMessageWrap, BaseMessageViewModel;

@interface MsgRecordDataWrap : RecordNodeDataSource <WCPlayerMediaExt> {
    NSArray *m_dataList;
    NSString *m_desc;
}

@property (retain, nonatomic) BaseMessageViewModel *messageViewModel;
@property (retain, nonatomic) CMessageWrap *m_parent;
@property (retain, nonatomic) FavoritesItemDataField *m_dataItem;
@property (nonatomic) unsigned int m_index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParent:(id)a0 DataItem:(id)a1 Index:(unsigned int)a2;
- (id)initWithParent:(id)a0 DataItem:(id)a1 dataList:(id)a2 desc:(id)a3 Index:(unsigned int)a4;
- (unsigned long long)getParserType;
- (id)Convert2AppFileMsg;
- (id)Convert2VideoInfo;
- (id)GetParent;
- (id)getThumbPathForData:(id)a0;
- (id)GetDataPath;
- (id)GetThumbPath;
- (id)GetDataItem;
- (unsigned int)GetParentLocalID;
- (unsigned int)GetImageAndVideoIndex;
- (int)GetImageDataDownloadStatus;
- (int)GetParentDownloadStatus;
- (id)GetImgAndVideoArray;
- (id)GetMaskImagePath;
- (id)GetMusicInfo;
- (id)GetTempFilePath;
- (BOOL)StartDownload;
- (id)getMediaWrapIdentifier;
- (id)getMediaWrapUrl;
- (id)getTempVideoPath;
- (id)getFormatVideoPath;
- (id)getThumbImagePath;
- (void).cxx_destruct;

@end

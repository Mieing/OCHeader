@class CommonMessageViewModel, NSString;

@interface RecordNodeDataSource : NSObject <RecordNodeDataSource>

@property (retain, nonatomic) CommonMessageViewModel *referMessageViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)GetRecordNodeContentHeight;
- (id)GetParent;
- (id)GetDataItem;
- (id)getThumbPathForData:(id)a0;
- (id)GetThumbPath;
- (id)GetDataPath;
- (id)messageViewModel;
- (unsigned long long)getParserType;
- (unsigned int)GetParentLocalID;
- (id)GetImageLocalID;
- (id)GetMaskImagePath;
- (id)GetImagePath;
- (id)GetImageSourcePath;
- (int)GetImageDataDownloadStatus;
- (int)GetParentDownloadStatus;
- (id)GetAudioInfo;
- (unsigned int)GetVoiceFormat;
- (BOOL)IsUrlVideoThumbPath:(id *)a0;
- (id)GetVideoTitle;
- (unsigned int)GetVideoDuration;
- (BOOL)IsUrlWebPageThumbPath:(id *)a0 thumbResourceIdentifier:(id *)a1;
- (id)GetWebPageDomin;
- (BOOL)IsUrlMusicThumbPath:(id *)a0;
- (id)GetMusicInfo;
- (id)GetFileExt;
- (id)GetFileName;
- (id)GetFilePath;
- (id)GetSightPath;
- (BOOL)StartDownload;
- (id)GetEmoticonWrap;
- (struct CGSize { double x0; double x1; })GetEmoticonSize;
- (void)UpdateEmoticonSize:(struct CGSize { double x0; double x1; })a0;
- (unsigned int)GetGameEmoticonContent;
- (struct CGSize { double x0; double x1; })GetEmoticonLayoutSize;
- (void)IsUrlWeAppThumbPath:(id *)a0 ThumbUrl:(id *)a1;
- (BOOL)hasRefer;
- (BOOL)hasReferImage;
- (id)getReferImage;
- (id)referDesc;
- (id)referDescForAccessibility;
- (void).cxx_destruct;

@end

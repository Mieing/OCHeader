@class NSString, NSMutableArray;

@interface MMImagePickerReportInfo : MMObject

@property (retain, nonatomic) NSString *sendSessionID;
@property (nonatomic) int pickerScene;
@property (nonatomic) long long finalFinishScene;
@property (nonatomic) int selectedPicCount;
@property (nonatomic) int selectedGifCount;
@property (nonatomic) int selectedVideoCount;
@property (nonatomic) int sendImageCountFromDragSelect;
@property (nonatomic) int sendVideoCountFromDragSelect;
@property (nonatomic) BOOL isOriginalImage;
@property (nonatomic) BOOL isFinalSend;
@property (nonatomic) BOOL hasPreviewSelected;
@property (nonatomic) BOOL hasOrderSelectedInPreviewAll;
@property (nonatomic) BOOL hasClickSelectedInPreviewAll;
@property (nonatomic) BOOL hasOrderSelectedInPreviewSelected;
@property (nonatomic) BOOL hasClickSelectedInPreviewSelected;
@property (nonatomic) BOOL hasSwitchAlbum;
@property (nonatomic) long long sendPicCountFromDefault;
@property (nonatomic) long long sendPicCountFromOther;
@property (nonatomic) unsigned long long startTimeStamp;
@property (retain, nonatomic) NSMutableArray *assetReportInfos;
@property (nonatomic) BOOL isUseSlider;
@property (retain, nonatomic) NSString *finalSelectedImageCountDetail;
@property (nonatomic) unsigned int exposeLiveButtonCloseCount;
@property (nonatomic) unsigned int exposeLiveButtonOpenCount;
@property (nonatomic) unsigned int clickLiveButtonOpenCount;
@property (nonatomic) unsigned int clickLiveButtonCloseCount;
@property (nonatomic) unsigned int previewExposeLiveButtonCloseCount;
@property (nonatomic) unsigned int previewExposeLiveButtonOpenCount;
@property (nonatomic) unsigned int previewClickLiveButtonOpenCount;
@property (nonatomic) unsigned int previewClickLiveButtonCloseCount;

- (void).cxx_destruct;

@end

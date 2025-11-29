@class HistoryData, PreviewTitleData, FeedResponse, AppointmentData, NSMutableArray, OperationFoldContent;

@interface FeedLiveTabComponentData : IESLivePBBaseMessage

@property (retain, nonatomic) FeedResponse *oftenWatchData;
@property (nonatomic) BOOL hasOftenWatchData;
@property (retain, nonatomic) NSMutableArray *pasterDataArray;
@property (readonly, nonatomic) unsigned long long pasterDataArray_Count;
@property (retain, nonatomic) NSMutableArray *tabsArray;
@property (readonly, nonatomic) unsigned long long tabsArray_Count;
@property (retain, nonatomic) AppointmentData *appointmentData;
@property (nonatomic) BOOL hasAppointmentData;
@property (retain, nonatomic) HistoryData *historyData;
@property (nonatomic) BOOL hasHistoryData;
@property (retain, nonatomic) NSMutableArray *operationModuleDataArray;
@property (readonly, nonatomic) unsigned long long operationModuleDataArray_Count;
@property (retain, nonatomic) PreviewTitleData *previewTitleData;
@property (nonatomic) BOOL hasPreviewTitleData;
@property (retain, nonatomic) OperationFoldContent *operationFoldContent;
@property (nonatomic) BOOL hasOperationFoldContent;

+ (id)descriptor;

@end

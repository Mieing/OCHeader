@class FeedResponse, NSMutableArray;

@interface FeedLiveTabData : IESLivePBBaseMessage

@property (retain, nonatomic) FeedResponse *previewData;
@property (nonatomic) BOOL hasPreviewData;
@property (retain, nonatomic) NSMutableArray *componentArray;
@property (readonly, nonatomic) unsigned long long componentArray_Count;
@property (nonatomic) long long watchLayer;
@property (nonatomic) BOOL needPin;

+ (id)descriptor;

@end

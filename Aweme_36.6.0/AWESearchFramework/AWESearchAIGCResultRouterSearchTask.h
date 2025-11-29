@class NSString, AWESearchAIGCImageInfo, AWESearchAIGCVideoInfo;

@interface AWESearchAIGCResultRouterSearchTask : NSObject

@property (readonly, copy, nonatomic) NSString *searchKeyword;
@property (readonly, copy, nonatomic) NSString *clientServerExtra;
@property (readonly, copy, nonatomic) NSString *requestParamsExtra;
@property (nonatomic) BOOL needSend;
@property (retain, nonatomic) AWESearchAIGCVideoInfo *videoInfo;
@property (retain, nonatomic) AWESearchAIGCImageInfo *imageInfo;
@property (readonly, copy, nonatomic) NSString *searchUniqueID;
@property (readonly, copy, nonatomic) NSString *searchDedupKey;
@property (readonly, nonatomic) BOOL hasRouterSearchTask;

- (id)initWithRouterParams:(id)a0;
- (BOOL)isFromSevenSplitScreenAIVideoAbstract:(id)a0;
- (void).cxx_destruct;

@end

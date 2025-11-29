@class NSString, NSMutableArray, NSMutableSet;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchAIGCCardStatus : NSObject

@property (retain, nonatomic) NSMutableArray *bytesyncData;
@property (nonatomic) long long storagedBytesyncCount;
@property (retain, nonatomic) NSMutableSet *receivedDataKey;
@property (nonatomic) BOOL hasWriteToStorage;
@property (copy, nonatomic) NSString *searchID;
@property (readonly, copy, nonatomic) NSString *cardID;
@property (readonly, weak, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (readonly, nonatomic) BOOL isSkipBytesync;
@property (readonly, nonatomic) BOOL hasFinishRender;
@property (readonly, nonatomic) BOOL canDelete;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, copy, nonatomic) NSString *renderStatus;
@property (nonatomic) BOOL hasReplacedToLynx;
@property (nonatomic) BOOL isError;
@property (copy, nonatomic) NSString *contentForCopy;
@property (nonatomic) long long lastSliceIndex;

- (id)initWithCardID:(id)a0;
- (BOOL)enableFixBlankChatCardRemoveIssue;
- (long long)SSECardRank;
- (void)refreshWithViewModel:(id)a0 extraParams:(id)a1;
- (void)refreshWithDisplayData:(id)a0;
- (id)getBytesyncData;
- (BOOL)enableRemoveOnNewRound;
- (void).cxx_destruct;

@end

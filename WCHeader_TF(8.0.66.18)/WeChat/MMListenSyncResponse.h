@class MMListenSyncItem, NSData, NSMutableArray, BaseResponse;

@interface MMListenSyncResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) MMListenSyncItem *syncItem;
@property (nonatomic) unsigned int syncTimeGap;
@property (retain, nonatomic) NSData *syncSessionBuffer;
@property (retain, nonatomic) MMListenSyncItem *musicDiscoverSyncItem;
@property (retain, nonatomic) MMListenSyncItem *podcastDiscoverSyncItem;
@property (retain, nonatomic) NSData *syncCtxsBuffer;
@property (retain, nonatomic) NSMutableArray *syncCtxs;
@property (retain, nonatomic) MMListenSyncItem *oftenListenSyncItem;
@property (retain, nonatomic) MMListenSyncItem *spareSyncItem;

+ (void)initialize;

- (void)setSpareSyncItem:(id)a0;
- (id)spareSyncItem;
- (void)setOftenListenSyncItem:(id)a0;
- (id)oftenListenSyncItem;
- (void)setSyncCtxs:(id)a0;
- (id)syncCtxs;
- (void)setSyncCtxsBuffer:(id)a0;
- (id)syncCtxsBuffer;
- (void)setPodcastDiscoverSyncItem:(id)a0;
- (id)podcastDiscoverSyncItem;
- (void)setMusicDiscoverSyncItem:(id)a0;
- (id)musicDiscoverSyncItem;
- (void)setSyncSessionBuffer:(id)a0;
- (id)syncSessionBuffer;
- (void)setSyncTimeGap:(unsigned int)a0;
- (unsigned int)syncTimeGap;
- (void)setSyncItem:(id)a0;
- (id)syncItem;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end

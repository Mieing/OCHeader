@class MMListenMusicBaseResponse, NSString, NSData, MMListenMusicChatRoomInfo, BaseResponse, MMListenRecommendInfo, NSMutableArray, MMListenAudioBaseResponse;

@interface MMListenFeedIdListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *results;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSString *updateMd5;
@property (nonatomic) unsigned long long expireTimeS;
@property (nonatomic) BOOL upwardsHasMore;
@property (nonatomic) BOOL needRefresh;
@property (retain, nonatomic) NSString *categoryId;
@property (nonatomic) BOOL needReplaceCtxRecommendInfo;
@property (retain, nonatomic) MMListenRecommendInfo *replaceRecommendInfo;
@property (retain, nonatomic) MMListenMusicBaseResponse *musicBaseResponse;
@property (retain, nonatomic) MMListenAudioBaseResponse *audioBaseResponse;
@property (retain, nonatomic) MMListenMusicChatRoomInfo *musicChatRoomInfo;

+ (void)initialize;

@end

@class FinderLivePreloadInfo, NSData, NSMutableArray, BaseResponse;

@interface FinderLiveStreamResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) FinderLivePreloadInfo *livePreloadInfo;

+ (void)initialize;

@end

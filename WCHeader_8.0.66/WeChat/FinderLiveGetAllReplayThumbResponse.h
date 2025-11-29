@class NSString, NSData, ResolutionInfo, NSMutableArray, BaseResponse;

@interface FinderLiveGetAllReplayThumbResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSMutableArray *thumbList;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSString *lowBitrateReplayUrl;
@property (nonatomic) unsigned int resolutionOnceChanged;
@property (retain, nonatomic) ResolutionInfo *resolutionInfo;

+ (void)initialize;

@end

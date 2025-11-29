@class FinderLivePreloadInfo, FinderPreloadInfo, NSString, NSData, FinderStreamLayoutInfo, NSMutableArray, BaseResponse;

@interface MusicLiveGetRelatedListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSData *streamLastBuffer;
@property (retain, nonatomic) FinderPreloadInfo *preloadInfo;
@property (retain, nonatomic) NSString *relatedStreamWording;
@property (retain, nonatomic) NSMutableArray *card;
@property (retain, nonatomic) NSMutableArray *txtCard;
@property (retain, nonatomic) FinderLivePreloadInfo *livePreloadInfo;
@property (retain, nonatomic) FinderStreamLayoutInfo *layoutInfo;
@property (retain, nonatomic) NSMutableArray *isMvWithBeat;
@property (retain, nonatomic) NSString *requestId;

+ (void)initialize;

@end

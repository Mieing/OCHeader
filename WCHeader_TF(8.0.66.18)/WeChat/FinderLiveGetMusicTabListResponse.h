@class NSData, NSMutableArray, BaseResponse;

@interface FinderLiveGetMusicTabListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *musicList;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) BOOL notShowRecommendTab;

+ (void)initialize;

@end

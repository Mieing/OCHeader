@class NSString, FinderPreloadInfo, NSData, NSMutableArray, BaseResponse;

@interface FinderGetLikedListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) unsigned int totalCount;
@property (retain, nonatomic) NSString *noMoreWording;
@property (nonatomic) unsigned int megavideoTotalCount;
@property (nonatomic) unsigned int finderTotalCount;
@property (retain, nonatomic) FinderPreloadInfo *preloadInfo;

+ (void)initialize;

@end

@class FinderPreloadInfo, NSData, NSMutableArray, BaseResponse;

@interface FinderGetFavListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) unsigned int totalCount;
@property (nonatomic) unsigned int megavideoTotalCount;
@property (nonatomic) unsigned int finderTotalCount;
@property (retain, nonatomic) FinderPreloadInfo *preloadInfo;
@property (retain, nonatomic) NSMutableArray *usualTopics;

+ (void)initialize;

@end

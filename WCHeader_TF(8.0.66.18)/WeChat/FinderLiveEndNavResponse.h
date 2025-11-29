@class BaseResponse, FinderLiveSquareStyleInfo, FinderLivePreloadInfo, NSMutableArray;

@interface FinderLiveEndNavResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *containerList;
@property (retain, nonatomic) FinderLivePreloadInfo *livePreloadInfo;
@property (retain, nonatomic) FinderLiveSquareStyleInfo *styleInfo;

+ (void)initialize;

@end

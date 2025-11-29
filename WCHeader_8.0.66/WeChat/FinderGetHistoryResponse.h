@class FinderPreloadInfo, NSData, NSMutableArray, BaseResponse;

@interface FinderGetHistoryResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) FinderPreloadInfo *preloadInfo;

+ (void)initialize;

@end

@class NSData, NSMutableArray, BaseResponse;

@interface FetchFinderMemberFeedListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSMutableArray *preloadObjectList;

+ (void)initialize;

@end

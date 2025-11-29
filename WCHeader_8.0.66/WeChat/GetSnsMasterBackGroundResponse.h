@class NSMutableArray, BaseResponse;

@interface GetSnsMasterBackGroundResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL forceUseOldFile;
@property (retain, nonatomic) NSMutableArray *albumList;

+ (void)initialize;

@end

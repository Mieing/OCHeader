@class NSString, NSMutableArray, BaseResponse;

@interface FinderGetLiveSongListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *songInfos;
@property (retain, nonatomic) NSString *singingSongName;

+ (void)initialize;

@end

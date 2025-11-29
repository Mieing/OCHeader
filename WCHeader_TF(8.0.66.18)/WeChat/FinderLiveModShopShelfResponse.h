@class FinderCmdRet, BaseResponse;

@interface FinderLiveModShopShelfResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderCmdRet *retList;

+ (void)initialize;

@end

@class NSMutableArray, BaseResponse;

@interface CheckWepkgVersionResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *pkgList;

+ (void)initialize;

- (void)setPkgList:(id)a0;
- (id)pkgList;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end

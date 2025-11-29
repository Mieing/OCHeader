@class NSString, NSMutableArray, BaseResponse;

@interface CheckTmplVerResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSString *cdnUrl;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) unsigned int versionLowerBound;
@property (retain, nonatomic) NSMutableArray *tmplInfoList;
@property (nonatomic) unsigned int checkColdDown;

+ (void)initialize;

- (void)setCheckColdDown:(unsigned int)a0;
- (unsigned int)checkColdDown;
- (void)setTmplInfoList:(id)a0;
- (id)tmplInfoList;
- (void)setVersionLowerBound:(unsigned int)a0;
- (unsigned int)versionLowerBound;
- (void)setMd5:(id)a0;
- (id)md5;
- (void)setCdnUrl:(id)a0;
- (id)cdnUrl;
- (void)setVersion:(unsigned int)a0;
- (unsigned int)version;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end

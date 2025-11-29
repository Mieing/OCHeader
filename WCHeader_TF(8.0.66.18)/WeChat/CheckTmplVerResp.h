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

@end

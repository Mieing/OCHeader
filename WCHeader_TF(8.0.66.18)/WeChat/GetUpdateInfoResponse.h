@class NSString, NSMutableArray, BaseResponse;

@interface GetUpdateInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int packVersion;
@property (retain, nonatomic) NSString *packMd5;
@property (nonatomic) unsigned int packSize;
@property (retain, nonatomic) NSString *packDescription;
@property (nonatomic) unsigned int urlCount;
@property (retain, nonatomic) NSMutableArray *downLoadUrl;
@property (retain, nonatomic) NSString *patchInfo;

+ (void)initialize;

@end

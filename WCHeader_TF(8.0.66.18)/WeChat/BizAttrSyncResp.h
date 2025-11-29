@class NSData, NSMutableArray, BaseResponse;

@interface BizAttrSyncResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *lastAttrVersion;
@property (retain, nonatomic) NSMutableArray *updateInfoList;

+ (void)initialize;

@end

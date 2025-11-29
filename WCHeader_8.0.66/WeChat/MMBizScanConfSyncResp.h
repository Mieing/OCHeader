@class NSString, BaseResponse;

@interface MMBizScanConfSyncResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *confStr;
@property (retain, nonatomic) NSString *guide;
@property (retain, nonatomic) NSString *retrievalLiteSuccText;
@property (nonatomic) unsigned int frameCountWithoutModel;

+ (void)initialize;

@end

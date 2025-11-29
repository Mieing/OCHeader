@class NSString, BaseResponse;

@interface BizAiScanImageScenePreviewResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *chatImageSearching;
@property (nonatomic) unsigned long long sessionid64;
@property (nonatomic) unsigned int seqNum;

+ (void)initialize;

@end

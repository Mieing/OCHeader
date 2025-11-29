@class NSString, TextAttributes, BaseResponse;

@interface GetFaceCheckLiveTypeResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (nonatomic) unsigned int liveType;
@property (nonatomic) BOOL recordExtraVideo;
@property (nonatomic) unsigned int extraVideoMaxSize;
@property (retain, nonatomic) TextAttributes *faceCheckTitle;

+ (void)initialize;

@end

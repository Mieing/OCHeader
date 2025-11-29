@class FinderCommentQRCodeInfo, BaseResponse;

@interface FinderScanQRCodeResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int qrcodeGeneratorVersion;
@property (retain, nonatomic) FinderCommentQRCodeInfo *commentInfo;

+ (void)initialize;

@end

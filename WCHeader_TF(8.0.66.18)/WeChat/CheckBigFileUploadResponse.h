@class NSString, BaseResponse;

@interface CheckBigFileUploadResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *signature;
@property (nonatomic) unsigned int fakeuin;
@property (retain, nonatomic) NSString *fakeAeskey;
@property (retain, nonatomic) NSString *fakeSignature;

+ (void)initialize;

@end

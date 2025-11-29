@class SdkFinderInfo, BaseRequest, NSString, TranslateLinkReq_iOSInfo, AppmsgSignature3rd, NSMutableArray;

@interface TranslateLinkReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *link;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) TranslateLinkReq_iOSInfo *iosInfo;
@property (retain, nonatomic) NSMutableArray *androidInfo;
@property (retain, nonatomic) NSString *sdkToken;
@property (retain, nonatomic) NSString *sdkVersion;
@property (nonatomic) int verifyScene;
@property (nonatomic) int verifyTokenResult;
@property (retain, nonatomic) SdkFinderInfo *finderInfo;
@property (retain, nonatomic) AppmsgSignature3rd *appmsgSignature3Rd;

+ (void)initialize;

@end

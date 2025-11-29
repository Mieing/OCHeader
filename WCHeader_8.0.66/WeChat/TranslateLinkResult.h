@class NSString, SdkFinderInfoResult, NSData, TranslateLinkResultShareInfo, TranslateLinkCacheWrap;

@interface TranslateLinkResult : MMObject

@property (copy, nonatomic) NSString *deeplink;
@property (nonatomic) int errcode;
@property (copy, nonatomic) NSString *errmsg;
@property (copy, nonatomic) NSString *errWording;
@property (nonatomic) unsigned int version;
@property (copy, nonatomic) NSString *sdkToken;
@property (copy, nonatomic) NSString *appNickname;
@property (copy, nonatomic) NSString *appIconUrl;
@property (copy, nonatomic) NSString *redirectUrl;
@property (retain, nonatomic) NSData *wxaRuntimeBuffer;
@property (nonatomic) unsigned int actionCode;
@property (retain, nonatomic) TranslateLinkResultShareInfo *shareMsgInfo;
@property (nonatomic) unsigned int wxaScene;
@property (copy, nonatomic) NSString *wxaSceneNote;
@property (retain, nonatomic) SdkFinderInfoResult *finderInfoResult;
@property (copy, nonatomic) NSString *platformSignature;
@property (copy, nonatomic) NSString *appmsgSignature3rd;
@property (nonatomic) long long shareChatScope;
@property (retain, nonatomic) TranslateLinkCacheWrap *cacheWrap;
@property (nonatomic) BOOL isFromLocalCache;

+ (id)resultWithCacheWrap:(id)a0 andError:(id *)a1;
+ (id)errorWithCode:(long long)a0 message:(id)a1;

- (id)description;
- (void).cxx_destruct;

@end

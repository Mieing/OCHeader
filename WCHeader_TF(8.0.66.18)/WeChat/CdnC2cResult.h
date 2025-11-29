@class NSString, NSData;

@interface CdnC2cResult : WXPBGeneratedMessage

@property (nonatomic) int hitcacheType;
@property (retain, nonatomic) NSString *fileid;
@property (retain, nonatomic) NSString *aeskey;
@property (retain, nonatomic) NSData *sessionResponse;
@property (nonatomic) BOOL sendmsgFromCdn;
@property (nonatomic) BOOL isReducedVideo;
@property (nonatomic) BOOL isSafecdn;
@property (retain, nonatomic) NSString *talker;

+ (void)initialize;

@end

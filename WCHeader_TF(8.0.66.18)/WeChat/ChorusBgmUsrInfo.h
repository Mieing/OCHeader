@class NSString, NSData;

@interface ChorusBgmUsrInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sdkUserId;
@property (retain, nonatomic) NSData *sdkUserSig;
@property (retain, nonatomic) NSData *sdkPrivateMapKey;

+ (void)initialize;

@end

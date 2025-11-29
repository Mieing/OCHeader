@class NSData, HeavyUserReqInfo;

@interface GetCliKVStrategyReq : WXPBGeneratedMessage

@property (nonatomic) unsigned int generalVersion;
@property (nonatomic) unsigned int specialVersion;
@property (nonatomic) unsigned int whiteOrBlackUinVersion;
@property (retain, nonatomic) NSData *randomEncryKey;
@property (nonatomic) unsigned int kvgeneralVersion;
@property (nonatomic) unsigned int kvspecialVersion;
@property (nonatomic) unsigned int kvwhiteOrBlackUinVersion;
@property (retain, nonatomic) HeavyUserReqInfo *heavyUserInfo;

+ (void)initialize;

@end

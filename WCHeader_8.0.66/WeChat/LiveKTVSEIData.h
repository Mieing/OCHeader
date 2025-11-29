@class NSString, NSMutableArray, LiveSEIKTVState;

@interface LiveKTVSEIData : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *ktvInfoList;
@property (nonatomic) unsigned long long seq;
@property (nonatomic) unsigned int ktvActionVersion;
@property (retain, nonatomic) NSString *actUserId;
@property (retain, nonatomic) NSString *actSessionId;
@property (retain, nonatomic) LiveSEIKTVState *ktvState;
@property (retain, nonatomic) NSString *actUniqueId;
@property (nonatomic) int ktvScoreEngineFlag;

+ (void)initialize;

@end

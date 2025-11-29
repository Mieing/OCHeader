@class NSString, CloudGameInfo;

@interface GameEngineInfo : IESLivePBBaseMessage

@property (retain, nonatomic) CloudGameInfo *xplayInfo;
@property (nonatomic) BOOL hasXplayInfo;
@property (copy, nonatomic) NSString *version;

+ (id)descriptor;

@end

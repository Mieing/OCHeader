@class NSMutableDictionary;

@interface IESLiveAioLinkUpdateLinkerData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableDictionary *logMap;
@property (readonly, nonatomic) unsigned long long logMap_Count;
@property (nonatomic) long long channelId;
@property (retain, nonatomic) NSMutableDictionary *battleParams;
@property (readonly, nonatomic) unsigned long long battleParams_Count;

+ (id)descriptor;

@end

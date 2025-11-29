@class NSString, NSMutableDictionary, HTSLiveStreamUrl;

@interface IESLiveLinkMicOpenGameInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *appId;
@property (retain, nonatomic) HTSLiveStreamUrl *streamURL;
@property (nonatomic) BOOL hasStreamURL;
@property (nonatomic) long long gameId;
@property (nonatomic) long long linkGameId;
@property (copy, nonatomic) NSString *gameExtra;
@property (nonatomic) long long gameType;
@property (copy, nonatomic) NSString *linkerExtra;
@property (nonatomic) long long pushType;
@property (retain, nonatomic) NSMutableDictionary *anchorOpenGameRoleInfos;
@property (readonly, nonatomic) unsigned long long anchorOpenGameRoleInfos_Count;

+ (id)descriptor;

@end

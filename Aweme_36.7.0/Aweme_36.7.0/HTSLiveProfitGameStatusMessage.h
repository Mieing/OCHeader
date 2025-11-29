@class NSString, HTSLiveCommon, HTSLiveStreamUrl, NSMutableDictionary;

@interface HTSLiveProfitGameStatusMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int status;
@property (copy, nonatomic) NSString *roomId;
@property (retain, nonatomic) HTSLiveStreamUrl *streamURL;
@property (nonatomic) BOOL hasStreamURL;
@property (nonatomic) long long gameId;
@property (copy, nonatomic) NSString *appId;
@property (nonatomic) long long linkGameId;
@property (retain, nonatomic) HTSLiveStreamUrl *iosStreamURL;
@property (nonatomic) BOOL hasIosStreamURL;
@property (retain, nonatomic) HTSLiveStreamUrl *androidStreamURL;
@property (nonatomic) BOOL hasAndroidStreamURL;
@property (copy, nonatomic) NSString *gameExtra;
@property (nonatomic) int pushStreamType;
@property (copy, nonatomic) NSString *linkerExtra;
@property (nonatomic) long long gameType;
@property (copy, nonatomic) NSString *initParam;
@property (copy, nonatomic) NSString *anchorOpenId;
@property (nonatomic) int reason;
@property (nonatomic) BOOL serverRtcStream;
@property (retain, nonatomic) NSMutableDictionary *trackInfo;
@property (readonly, nonatomic) unsigned long long trackInfo_Count;
@property (nonatomic) long long channelId;
@property (nonatomic) int bizType;

+ (id)descriptor;

@end

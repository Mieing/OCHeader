@class NSString, NSMutableDictionary;

@interface HTSLiveLiveStatusPushEvent : IESLivePBBaseMessage

@property (nonatomic) long long anchorUid;
@property (nonatomic) long long roomId;
@property (nonatomic) long long liveStatus;
@property (nonatomic) long long notifyType;
@property (nonatomic) long long changeSource;
@property (retain, nonatomic) NSMutableDictionary *extraInfo;
@property (readonly, nonatomic) unsigned long long extraInfo_Count;
@property (nonatomic) BOOL disableFetch;
@property (nonatomic) long long eventTimeMs;
@property (copy, nonatomic) NSString *anchorOpenId;

+ (id)descriptor;

@end

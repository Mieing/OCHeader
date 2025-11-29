@class NSString, NSMutableDictionary;

@interface IESLiveAioLinkLinkerLogInfo : IESLivePBBaseMessage

@property (nonatomic) long long inviteType;
@property (nonatomic) long long matchType;
@property (copy, nonatomic) NSString *inviteeList;
@property (retain, nonatomic) NSMutableDictionary *logMap;
@property (readonly, nonatomic) unsigned long long logMap_Count;
@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) NSString *flexActivityId;

+ (id)descriptor;

@end

@class NSMutableDictionary;

@interface TIMXPBNCheckTokenRequestBody : GPBMessage

@property (nonatomic) long long uid;
@property (nonatomic) BOOL hasUid;
@property (nonatomic) int appId;
@property (nonatomic) BOOL hasAppId;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;

+ (id)descriptor;

@end

@class NSString, NSMutableDictionary;

@interface IESLiveGameOpenPlatformSidManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *sids;
@property (copy, nonatomic) NSString *currentUserId;

+ (id)shareInstance;

- (id)getSidForAppId:(id)a0;
- (id)createSidForAppId:(id)a0 diContext:(id)a1;
- (void)clearAllSid;
- (void).cxx_destruct;
- (id)init;

@end

@class NSSet;

@interface AWEIMMessageTabAsyncLoadConfig : NSObject

@property (retain, nonatomic) NSSet *supportEntryTypes;
@property (readonly, nonatomic) BOOL enableInfoLog;
@property (readonly, nonatomic) BOOL enableErrorLog;
@property (readonly, nonatomic) BOOL enableTrack;
@property (readonly, nonatomic) long long trackSample;
@property (readonly, nonatomic) BOOL enableFirstScreenAlterationLogic;
@property (readonly, nonatomic) long long firstScreenMinimumChatCount;

- (BOOL)supportChatListEntryType:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end

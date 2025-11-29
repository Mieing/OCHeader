@class AWEKefuGuideSession;

@interface AWEKefuGuideSessionManager : NSObject

@property (retain, nonatomic) AWEKefuGuideSession *currentSession;

+ (id)sharedInstance;

- (void)setExtraInfoWithId:(id)a0 extraInfo:(id)a1 completion:(id /* block */)a2;
- (id)getGuideInfo;
- (long long)getActionId;
- (void)startGuideWithConfig:(id)a0 completion:(id /* block */)a1;
- (void)closeGuideWithUUID:(id)a0 reason:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)getUUID;

@end

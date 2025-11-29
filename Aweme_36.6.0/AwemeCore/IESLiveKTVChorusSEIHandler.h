@class NSString, IESLiveKTVChorusStore;

@interface IESLiveKTVChorusSEIHandler : NSObject <IESLiveKTVChorusActions>

@property (weak, nonatomic) IESLiveKTVChorusStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)bindStore:(id)a0;
- (void)willChorusEnd;
- (void).cxx_destruct;
- (void)sendPing;
- (id)player;

@end

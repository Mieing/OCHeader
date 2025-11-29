@interface IESLiveKTVLogger : NSObject <IESLiveKTVLogger>

- (void)didSetAttachingDIContext;
- (void)logMusic:(id)a0 eventName:(id)a1;
- (void)logMusic:(id)a0 eventName:(id)a1 extra:(id)a2;
- (void)logMusicArray:(id)a0 eventName:(id)a1;
- (void)logOrderListInfoArray:(id)a0 eventName:(id)a1;
- (void)logOrderListInfoArray:(id)a0 eventName:(id)a1 extra:(id)a2;

@end

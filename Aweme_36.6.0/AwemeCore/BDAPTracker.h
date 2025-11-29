@interface BDAPTracker : NSObject

+ (BOOL)trackAdEvent:(id)a0 tag:(id)a1 extra:(id)a2 adExtra:(id)a3;
+ (void)monitorServiceWithName:(id)a0 params:(id)a1 extraData:(id)a2;
+ (void)trackWithTag:(id)a0 label:(id)a1 params:(id)a2 extra:(id)a3;
+ (void)trackCallStateWithTag:(id)a0 label:(id)a1 params:(id)a2 extra:(id)a3;

@end

@interface EcTrackAgent : NSObject

+ (void)trackEventName:(id)a0 param:(id)a1 metric:(id)a2 extra:(id)a3 client:(id)a4;
+ (unsigned long long)curTimeMS;
+ (void)track:(id)a0 teaDelegate:(id)a1 hemiDelegate:(id)a2;

@end

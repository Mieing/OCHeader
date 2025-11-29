@interface AWEPlayInteractionComponentTrackHandler : NSObject

+ (id)getAwemeModelFromTrackPlugin:(id)a0;
+ (id)stayDurationEventWithComponentId:(long long)a0;
+ (void)trackStayDurationForComponentWithDuration:(double)a0 trackPlugin:(id)a1 eventName:(id)a2;
+ (id)commonParamsForComponentTrackWithAwemeModel:(id)a0;
+ (id)getBizParamsFromTrackPlugin:(id)a0;
+ (void)trackStayDurationWithEnterTimeStamp:(double)a0 trackPlugin:(id)a1 componentTrackId:(long long)a2;

@end

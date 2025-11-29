@class NSString;

@interface AWEAwemeDetailBaseTracker : NSObject <AWEAwemeDetailTrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)trackKeyForType:(long long)a0;

- (id)paramsForStayTimeInDetailTableVC:(id)a0 extraParams:(id)a1;
- (id)paramsForEnterPersonalDetailInDetailTableVC:(id)a0 extraParams:(id)a1;
- (id)paramsForEnterDetailInDetailTableVC:(id)a0 extraParams:(id)a1;
- (id)paramsForTrackerIn:(id)a0 type:(long long)a1 extraParams:(id)a2;
- (void)didTrackForTrackerInDetailTableVC:(id)a0 type:(long long)a1 trackParams:(id)a2;

@end

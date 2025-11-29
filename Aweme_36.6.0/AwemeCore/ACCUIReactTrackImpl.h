@class ACCToolUIReactTracker, NSString;

@interface ACCUIReactTrackImpl : NSObject <ACCUIReactTrackProtocol>

@property (retain, nonatomic) ACCToolUIReactTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)eventBegin:(id)a0;
- (id)latestEventName;
- (void)eventEnd:(id)a0 withPublishModel:(id)a1;
- (id)getBizParmas:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

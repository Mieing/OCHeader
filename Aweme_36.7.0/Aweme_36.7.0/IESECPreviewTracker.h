@class NSString;
@protocol IESECMediaPreviewDelegate;

@interface IESECPreviewTracker : NSObject <IESECPreviewTrackerService>

@property (weak, nonatomic) id<IESECMediaPreviewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mediaPreviewTrackWithEventName:(id)a0 andParams:(id)a1 btmID:(id)a2;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end

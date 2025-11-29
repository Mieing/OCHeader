@class NSString;

@interface IESAccountTrackInject : NSObject <IESAccountTrackDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 withParams:(id)a1;

@end

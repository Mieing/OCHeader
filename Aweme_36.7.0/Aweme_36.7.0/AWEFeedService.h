@class NSString;

@interface AWEFeedService : HTSService <AWEFeedService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isCapturingScreen;
- (BOOL)shouldPreventCaptureScreenForPaidPlaylet:(id)a0;

@end

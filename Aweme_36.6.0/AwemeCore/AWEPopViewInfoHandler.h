@class NSString;

@interface AWEPopViewInfoHandler : NSObject <AWEPopViewInfoDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)popViewColdToShowDuration;
- (id)currentAppInfo;

@end

@class NSString;

@interface AWETuringNoCaptchaUtils : NSObject <BDTuringNoCaptchaDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end

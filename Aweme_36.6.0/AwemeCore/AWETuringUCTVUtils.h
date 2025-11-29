@class NSString;

@interface AWETuringUCTVUtils : NSObject <BDTuringUCTwiceVerifyDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)bdturingUCTwiceVerifyWithCallback:(id)a0 callback:(id /* block */)a1;

@end

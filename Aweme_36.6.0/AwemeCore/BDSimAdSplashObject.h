@class NSString;

@interface BDSimAdSplashObject : NSObject <BDSimAdSplashModel>

@property (copy, nonatomic) NSString *splashID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end

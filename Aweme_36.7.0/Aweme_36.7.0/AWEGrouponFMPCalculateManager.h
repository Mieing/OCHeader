@class NSString;

@interface AWEGrouponFMPCalculateManager : NSObject <AWEPerfFMPCalculateDelegate>

@property (nonatomic) double startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)startFMPCalculateForView:(id)a0 finishCompletion:(id /* block */)a1;
- (BOOL)isViewValid:(id)a0;

@end

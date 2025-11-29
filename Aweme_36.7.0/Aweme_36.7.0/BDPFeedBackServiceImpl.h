@class NSString;

@interface BDPFeedBackServiceImpl : NSObject <BDPFeedBackService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (id)createFeedbackViewControllerWithUniqueID:(id)a0 urlString:(id)a1;
- (id)createFeedbackViewControllerWithUniqueID:(id)a0 urlString:(id)a1 snapshotTarget:(id)a2;

@end

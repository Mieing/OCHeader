@class NSString;
@protocol AWEPostPageContext;

@interface AWEPostPageMixHandler : NSObject <AWEPostPageMixService>

@property (nonatomic) BOOL isMixSyncUpdateDone;
@property (readonly, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (void).cxx_destruct;

@end

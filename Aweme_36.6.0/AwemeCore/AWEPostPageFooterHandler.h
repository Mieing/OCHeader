@class NSString;
@protocol AWEPostPageContext;

@interface AWEPostPageFooterHandler : NSObject <AWEPostPageFooterService>

@property (nonatomic) long long publishDidClickSignal;
@property (readonly, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (void)sendPublishDidClickSignal;
- (void).cxx_destruct;

@end

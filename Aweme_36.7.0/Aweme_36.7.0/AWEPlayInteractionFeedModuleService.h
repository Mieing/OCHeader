@class NSString;

@interface AWEPlayInteractionFeedModuleService : HTSService <AWEPlayInteractionFeedModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createInteractionProgressController;
- (id)getFeedProgressWrapperObjectWithBlock:(id /* block */)a0;

@end

@class NSString;
@protocol BDWebDefaultRequestDecoratorDelegate;

@interface BDWebDefaultRequestDecorator : NSObject <BDWebRequestDecorator>

@property (class, weak, nonatomic) id<BDWebDefaultRequestDecoratorDelegate> delegate;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bdw_decorateRequest:(id)a0;

@end

@class NSString;
@protocol HTSLiveOrientationRouter;

@interface IESLiveUserServiceDelegateImp : NSObject <IESLiveUserServiceDelegate>

@property (retain, nonatomic) id<HTSLiveOrientationRouter> orientationRouter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)vsorientationRouter;
- (void)willLogin:(id /* block */)a0;
- (void).cxx_destruct;

@end

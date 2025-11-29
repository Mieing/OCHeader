@class NSString, NSMapTable;
@protocol RTVXRControllerInjector;

@interface __AWERTVFeedContentControllers : NSObject <AWERTVFeedContentControllers>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (retain, nonatomic) NSMapTable *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getInstance:(id)a0;
- (id)getController:(id)a0;
- (id)getControllerForKey:(id)a0;
- (id)getControllerWithProtocol:(id)a0;
- (void)registerController:(id)a0 forProtocol:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

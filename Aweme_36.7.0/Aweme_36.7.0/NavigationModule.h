@class NSString, NSDictionary;

@interface NavigationModule : NSObject <LynxModule>

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (retain, nonatomic) id extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void)replace:(id)a0 param:(id)a1;
- (void)registerRoute:(id)a0;
- (void)navigateTo:(id)a0 param:(id)a1;
- (id)init;
- (void)goBack;

@end

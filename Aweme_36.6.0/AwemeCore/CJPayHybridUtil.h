@class NSString;

@interface CJPayHybridUtil : NSObject <CJPayHybridService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)sharedUtil;

- (void)openSchema:(id)a0 withInfo:(id)a1 routeDelegate:(id)a2;

@end

@class NSString;

@interface KindaUIEventLoop : NSObject <MMKEventLoop>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)post:(id)a0;

@end

@class NSString;

@interface MMKindaPayCardManagerImpl : NSObject <MMKindaPayCardManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addPayCardImpl:(id)a0 cancelCallback:(id)a1;

@end

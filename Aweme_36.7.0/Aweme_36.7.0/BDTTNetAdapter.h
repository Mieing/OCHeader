@class NSArray;

@interface BDTTNetAdapter : NSObject

@property (class, nonatomic) BOOL isAsyncWhenHandleSchemeTask;
@property (class, retain, nonatomic) NSArray *safeHostList;

- (void)dealloc;

@end

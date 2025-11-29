@class NSString, NSHashTable;

@interface ARTPornSrvImpl : NSObject <ARTBusinessSrvProtocol>

@property (nonatomic) BOOL ttnetMallocErrorFlag;
@property (retain, nonatomic) NSHashTable *runningInsts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

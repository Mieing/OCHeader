@class NSString;

@interface EcsCoreEcsUserStateMgrCpp : UnitRCObjcBaseProxyClass <EcsCoreEcsUserStateMgr>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initState;
+ (id)sharedInstance;

- (id)getUserState;

@end

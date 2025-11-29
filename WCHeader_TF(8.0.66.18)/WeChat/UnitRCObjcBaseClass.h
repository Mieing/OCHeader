@class NSString, UnitRCAssociatedObjc;

@interface UnitRCObjcBaseClass : NSObject <UnitRCObjcBaseProtocol>

@property (retain, nonatomic) UnitRCAssociatedObjc *urObjc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

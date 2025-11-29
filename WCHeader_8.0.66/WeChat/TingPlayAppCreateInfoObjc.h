@class NSString;

@interface TingPlayAppCreateInfoObjc : UnitRCObjcBaseClass <TingPlayAppCreateInfo>

@property (nonatomic) int appId;
@property (retain, nonatomic) NSString *appName;
@property (nonatomic) int playTaskType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

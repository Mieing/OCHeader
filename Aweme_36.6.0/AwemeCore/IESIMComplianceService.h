@class NSString;

@interface IESIMComplianceService : HTSService <IESIMComplianceService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportWithType:(unsigned long long)a0 objectID:(id)a1 ownerID:(id)a2 extraParam:(id)a3;

@end

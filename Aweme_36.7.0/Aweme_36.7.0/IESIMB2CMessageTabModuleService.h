@class NSString;

@interface IESIMB2CMessageTabModuleService : HTSService <IESIMB2CMessageTabModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)currentMessageTabMode;
- (void)updateHighlyProspectiveOpenStatus:(BOOL)a0 currentStatus:(long long)a1;

@end

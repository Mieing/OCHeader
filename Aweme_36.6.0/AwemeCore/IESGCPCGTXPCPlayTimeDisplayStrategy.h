@class NSString;

@interface IESGCPCGTXPCPlayTimeDisplayStrategy : NSObject <IESGCPCGMembershipCardDisplayStrategy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldShowWithContext:(id)a0;

@end

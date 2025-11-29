@class NSString;
@protocol LynxSecurityDelegateProtocol;

@interface LynxSecurityService : NSObject <LynxServiceSecurityProtocol>

@property (retain) id<LynxSecurityDelegateProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (void)updateRSAPublicKeys:(id)a0;
+ (unsigned long long)serviceType;

@end

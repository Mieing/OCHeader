@class NSString;
@protocol LynxSecurityDelegateProtocol;

@interface LynxSecurityService : NSObject <LynxServiceSecurityProtocol>

@property (retain) id<LynxSecurityDelegateProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateRSAPublicKeys:(id)a0;

@end

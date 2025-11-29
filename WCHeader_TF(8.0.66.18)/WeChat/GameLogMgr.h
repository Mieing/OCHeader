@class NSString;

@interface GameLogMgr : MMRootService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)gameLog:(unsigned long long)a0 bizType:(unsigned long long)a1 scene:(unsigned long long)a2 action:(id)a3 format:(id)a4;


@end

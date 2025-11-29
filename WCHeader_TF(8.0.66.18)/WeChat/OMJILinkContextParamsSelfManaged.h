@class NSString;

@interface OMJILinkContextParamsSelfManaged : NSObject

@property (readonly, nonatomic) unsigned long long sessionModuleType;
@property (readonly, nonatomic) BOOL useDebugServer;
@property (readonly, copy, nonatomic) NSString *debugServerIP;

- (id)initWithSessionModuleType:(unsigned long long)a0 useDebugServer:(BOOL)a1 debugServerIP:(id)a2;
- (void).cxx_destruct;

@end

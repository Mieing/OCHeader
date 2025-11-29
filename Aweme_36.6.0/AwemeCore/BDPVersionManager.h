@class NSString;
@protocol BDPVersionManagerProtocol;

@interface BDPVersionManager : NSObject <BDPVersionManagerProtocol>

@property (retain) id<BDPVersionManagerProtocol> businessHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localLibVersionString;
+ (long long)localLibVersion;
+ (void)registerBusinessHandler:(id)a0;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;

@end

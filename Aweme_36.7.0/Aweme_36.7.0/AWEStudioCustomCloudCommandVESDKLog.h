@class NSString;

@interface AWEStudioCustomCloudCommandVESDKLog : NSObject <AWECustomCommandHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createInstance;
+ (id)cloudCommandIdentifier;

- (void)excuteCommandWithParams:(id)a0 completion:(id /* block */)a1;

@end

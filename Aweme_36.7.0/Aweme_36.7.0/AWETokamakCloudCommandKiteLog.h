@class NSString;

@interface AWETokamakCloudCommandKiteLog : NSObject <AWECustomCommandHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createInstance;
+ (id)cloudCommandIdentifier;

@end

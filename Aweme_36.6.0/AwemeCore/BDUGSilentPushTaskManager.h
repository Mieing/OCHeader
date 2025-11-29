@class NSDictionary, NSString;

@interface BDUGSilentPushTaskManager : NSObject <BDUGSilentPushTaskManagerProtocol>

@property (copy, nonatomic) NSDictionary *payload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end

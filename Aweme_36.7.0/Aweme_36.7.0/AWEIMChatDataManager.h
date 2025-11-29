@class NSString;

@interface AWEIMChatDataManager : NSObject <IESIMChatDataManagerColdStartDelegate>

@property (nonatomic) BOOL shouldDowngrade;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)iesim_shouldColdStartRequest;

@end

@class NSString, AWEPageStatusModel;

@interface AWEBaseViewModel : NSObject <AWEViewModelProtocol>

@property BOOL networkReachable;
@property (retain) AWEPageStatusModel *pageStatusModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isNetworkReachable;

- (void)setupNetworkReachableNotification;
- (void)networkConnectionChanged:(id)a0;
- (void)updatePageStatusMessage:(id)a0 type:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isNetworkReachable;
- (void)dealloc;

@end

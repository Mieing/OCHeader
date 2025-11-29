@class AWEGeckoCDNManager;

@interface AWEMusicResourceOfflineManager : NSObject

@property (retain, nonatomic) AWEGeckoCDNManager *manager;

+ (id)cdnDomain;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end

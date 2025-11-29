@class NSArray, NSMutableDictionary, NSString;

@interface AWESearchDynamicResourceChannelManager : NSObject <IESGurdEventDelegate>

@property (retain, nonatomic) NSArray *searchChannelList;
@property (retain, nonatomic) NSMutableDictionary *channelStatusDict;
@property (nonatomic) BOOL isChecked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)gurdDidFinishApplyingPackageForAccessKey:(id)a0 channel:(id)a1 succeed:(BOOL)a2 error:(id)a3;
- (void)gurdDidCleanCachePackageForAccessKey:(id)a0 channel:(id)a1;
- (void)checkSearchChannelStatusWithForce:(BOOL)a0;
- (BOOL)isChannelAvailable:(id)a0;
- (BOOL)isChannelAvailableInCardTemplateDowngrade:(id)a0;
- (void).cxx_destruct;

@end

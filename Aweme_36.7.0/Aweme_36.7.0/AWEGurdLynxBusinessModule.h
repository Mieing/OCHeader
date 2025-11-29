@class NSString, NSMutableDictionary;

@interface AWEGurdLynxBusinessModule : NSObject <IESGurdEventDelegate>

@property (class, copy, nonatomic) NSString *appAccessKey;

@property (retain, nonatomic) NSMutableDictionary *channelLoadDict;
@property (retain, nonatomic) NSMutableDictionary *channelFinishDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)syncResourcesIfNeeded;
+ (BOOL)enableGurd;
+ (void)bytedSettingDidChange;
+ (void)syncResourcesWithChannel:(id)a0 isUrgent:(BOOL)a1 completion:(id /* block */)a2;
+ (void)_syncHighPriorityResources;
+ (void)_syncDefaultPriorityResources;
+ (void)_syncResourcesWithChannels:(id)a0 completion:(id /* block */)a1;
+ (void)postLaunchInit;
+ (id)accessKeyDirectory;
+ (id)lynxFilePathForChannel:(id)a0;
+ (BOOL)isSingleLynxFileForChannel:(id)a0;
+ (id)sharedInstance;

@end

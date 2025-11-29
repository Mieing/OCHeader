@class NSString;
@protocol RTVVoipStorageAreaInterface;

@interface RTVVoipPublisherBeautyResourceService : NSObject <RTVVoipPublisherBeautyResourceServiceInterface>

@property (retain, nonatomic) id<RTVVoipStorageAreaInterface> storageArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)beautyEffects;
- (BOOL)isBeautyFeatureAvailable;
- (id)cachedBeautyResourceURLStr;
- (id)downloadBeautyResourceIfNeeded;
- (id)beautySettingsDictionary;
- (id)beautyEffectsPromise;
- (id)loadBeautyEffects;
- (id)__checkNeedUpdate;
- (id)__cachedResp;
- (id)__downloadEffects:(id)a0;
- (id)__cachedEffects;
- (void).cxx_destruct;

@end

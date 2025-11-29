@class NSString, TSPKCrossPlatformModel;

@interface TSPKCrossPlatformSubscriber : NSObject <TSPKSubscriber>

@property (retain, nonatomic) TSPKCrossPlatformModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventNameWithEvent:(id)a0;
- (void)setConfigs:(id)a0;
- (BOOL)canHandelEvent:(id)a0;
- (id)hanleEvent:(id)a0;
- (id)extractValidCrossPlatformInfos:(id)a0;
- (id)callingInfoStringWithArray:(id)a0;
- (id)filterParamsWithEvent:(id)a0;
- (id)paramsWithEvent:(id)a0 crpCallingEventsStr:(id)a1;
- (BOOL)isEnable;
- (void).cxx_destruct;
- (id)uniqueId;

@end

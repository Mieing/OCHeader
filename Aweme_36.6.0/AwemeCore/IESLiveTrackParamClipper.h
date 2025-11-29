@class NSArray, NSString, NSHashTable;

@interface IESLiveTrackParamClipper : NSObject <IESLiveSettingsSubscriber>

@property (nonatomic) BOOL enableClip;
@property (retain, nonatomic) NSArray *paramsBlockList;
@property (retain, nonatomic) NSArray *eventAllowList;
@property (retain, nonatomic) NSHashTable *paramsBlockTable;
@property (retain, nonatomic) NSHashTable *eventAllowTable;
@property (nonatomic) BOOL enableClipAllEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)settingUpdateWithKey:(id)a0 value:(id)a1;
- (id)clipWithEvent:(id)a0 params:(id)a1;
- (void)updateWithClipConfig:(id)a0;
- (id)constructParamsBlockTable;
- (id)constructEventAllowTable;
- (void).cxx_destruct;
- (id)init;

@end

@class NSString;
@protocol IESLiveSettings;

@interface IESLiveGameCPSettingServiceImpl : NSObject <IESGCPLiveSettingService>

@property (weak, nonatomic) id<IESLiveSettings> liveSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectWithSettingKey:(id)a0 stable:(BOOL)a1;
- (id)objectWithSettingKey:(id)a0;
- (void).cxx_destruct;

@end

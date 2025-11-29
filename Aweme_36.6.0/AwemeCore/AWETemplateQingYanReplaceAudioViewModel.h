@class NSString;

@interface AWETemplateQingYanReplaceAudioViewModel : AWETemplateBaseViewModel <AWEPublishTaskMessage>

@property (nonatomic) BOOL isReplacingMusic;
@property (nonatomic) BOOL hadShowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)settingsConfig;
+ (BOOL)shouldActiveWithData:(id)a0 scene:(unsigned long long)a1 context:(id)a2;
+ (BOOL)isFromHomepagePostWorkList:(id)a0;
+ (BOOL)enableBarFromSettings;
+ (BOOL)hadReplacedItem:(id)a0;
+ (BOOL)hasExceededMaxDisplayCountWithItemID:(id)a0;
+ (void)recordDisplayCountWithItemID:(id)a0;
+ (void)recordHadReplacedItem:(id)a0;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)viewController_viewDidAppear;
- (void)viewDidTriggerAction:(unsigned long long)a0;
- (void)handleReplaceMusicStatusNotification:(id)a0;
- (void)didInitialized;
- (void)replaceAudio;
- (void)reset;
- (void)dealloc;

@end

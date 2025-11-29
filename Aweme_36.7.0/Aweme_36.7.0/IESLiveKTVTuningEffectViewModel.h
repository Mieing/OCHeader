@class HTSEventContext, NSString, NSArray, IESLiveKTVTuningEffectResourceManager, RACSubject, IESLiveKTVCommonApi, IESLiveKTVTuningEffectCellViewModel, UIColor, RACSignal, IESLiveComponentContext;
@protocol IESLiveRoomService;

@interface IESLiveKTVTuningEffectViewModel : NSObject

@property (nonatomic) BOOL firstInstall;
@property (nonatomic) BOOL inKTV;
@property (nonatomic) BOOL userSelected;
@property (nonatomic) long long currentSelectedIndex;
@property (copy, nonatomic) NSArray *effectListArray;
@property (copy, nonatomic) NSArray *tuningEffectResourceAllowlist;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) IESLiveKTVCommonApi *api;
@property (retain, nonatomic) IESLiveKTVTuningEffectCellViewModel *currentSelectedEffect;
@property (retain, nonatomic) IESLiveKTVTuningEffectResourceManager *resourceManager;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) RACSubject *reloadListSubject;
@property (retain, nonatomic) RACSubject *scrollSubject;
@property (retain, nonatomic) RACSubject *switchEffectStatusSubject;
@property (retain, nonatomic) RACSubject *switchEffectPathSubject;
@property (copy, nonatomic) NSString *defaultEffectName;
@property (retain, nonatomic) UIColor *effectTitleColor;
@property (readonly, nonatomic) RACSignal *reloadListSignal;
@property (readonly, nonatomic) RACSignal *scrollSignal;
@property (readonly, nonatomic) RACSignal *switchEffectPathSignal;
@property (readonly, nonatomic) RACSignal *switchEffectStatusSignal;
@property (retain, nonatomic) NSString *lastNameID;
@property (nonatomic) BOOL isSoloKTV;

+ (id)generateTuningEffectResourceAllowlist:(id)a0;

- (void)toggleCurrentTuningEffectWithNameID:(id)a0;
- (void)fetchTuningEffectList:(id /* block */)a0;
- (id)getCurrentNameID;
- (void)didOpenTuningPanel;
- (id)initWithAPI:(id)a0 roomModel:(id)a1 eventContext:(id)a2 componentContext:(id)a3 titleColor:(id)a4 isSoloKTV:(BOOL)a5;
- (id)p_kvStoreKeyFrom:(id)a0;
- (id)generateItemViewModels:(id)a0;
- (void)didSelectItem:(id)a0 index:(long long)a1 isDefault:(BOOL)a2;
- (void)updateEffectStatus;
- (void)didSelectDefaultTuningEffect;
- (void)monitorFetchList:(id)a0;
- (void)cacheList:(id)a0;
- (id)loadCachedList;
- (void)monitorTuningEffect:(id)a0 needDownload:(BOOL)a1 path:(id)a2 error:(id)a3;
- (id)initWithAPI:(id)a0 roomModel:(id)a1 eventContext:(id)a2 componentContext:(id)a3 titleColor:(id)a4;
- (void)updateKTVStatus:(BOOL)a0;
- (id)getCurrentPath;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)itemAtIndexPath:(id)a0;
- (void)dealloc;
- (void)didSelectItemAtIndexPath:(id)a0;

@end

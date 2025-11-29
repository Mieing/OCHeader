@class HTSEventContext, NSString, NSArray, RACDisposable, IESLiveKTVTuningEffectResourceManager, UIColor, NSNumber, GetTuningInfoResponse_EffectItem;

@interface IESLiveKTVTuningEffectCellViewModel : NSObject

@property (nonatomic) BOOL selected;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *iconUrls;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) GetTuningInfoResponse_EffectItem *item;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) RACDisposable *disposable;
@property (retain, nonatomic) IESLiveKTVTuningEffectResourceManager *resourceManager;
@property (nonatomic) BOOL isDefault;
@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) UIColor *titleColor;
@property (nonatomic) BOOL isSoloKTV;

- (void)didDeselect;
- (id)initWithItem:(id)a0 resourceManager:(id)a1 eventContext:(id)a2 componentContext:(id)a3 titleColor:(id)a4 isSoloKTV:(BOOL)a5;
- (id)initWithItem:(id)a0 resourceManager:(id)a1 eventContext:(id)a2 componentContext:(id)a3 titleColor:(id)a4;
- (void)didSelect:(BOOL)a0 completion:(id /* block */)a1;
- (id)cachePath;
- (id)tracker;
- (void).cxx_destruct;

@end

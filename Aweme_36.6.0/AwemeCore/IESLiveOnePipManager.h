@class NSString;
@protocol IESLiveOuterPipProvider, IESLiveSmallWindowService, IESLiveOnePipSettingsItemProtocol, IESLivePipProvider;

@interface IESLiveOnePipManager : NSObject <IESLiveOnePipService>

@property (retain, nonatomic) id<IESLiveSmallWindowService> commonSmallWindowManager;
@property (retain, nonatomic) id<IESLivePipProvider> liveSmallWindowManager;
@property (retain, nonatomic) id<IESLiveOuterPipProvider> liveOuterPipSmallWindowManager;
@property (retain, nonatomic) id<IESLiveOnePipSettingsItemProtocol> pipSettingsManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)updateDIFromContext:(id)a0;
- (void)showPipWithPipModel:(id)a0 callTrace:(id)a1;
- (void)hidePipWithPipModel:(id)a0 callTrace:(id)a1;
- (BOOL)isShowingPipWithManagerType:(unsigned long long)a0;
- (id)pipManagerWithModel:(id)a0;
- (id)pipManagerWithType:(unsigned long long)a0;
- (void).cxx_destruct;

@end

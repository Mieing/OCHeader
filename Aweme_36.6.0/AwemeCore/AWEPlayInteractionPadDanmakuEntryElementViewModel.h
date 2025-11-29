@class NSString, AWEPageContext;
@protocol AWEPlayInteractionContextProtocol, AWEPlayInteractionViewModelHelper;

@interface AWEPlayInteractionPadDanmakuEntryElementViewModel : NSObject <AWEPlayInteractionViewModelProtocol>

@property (nonatomic) BOOL hasFakeDanmakuSwitch;
@property (nonatomic) BOOL danmakuPostPauseVideoPlay;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (retain, nonatomic) id<AWEPlayInteractionViewModelHelper> viewModelHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPlayInteractionAdapterClass;

- (id)referString;
- (id)logExtraDict;
- (id)enterFrom;
- (id)fromModel;
- (id)aAWEPadModuleAdapter;
- (id)interactor_fromModel;
- (id)aAWEPlayInteractionAdapter;
- (BOOL)shouldShowPadDanmakuEntryWithModel:(id)a0;
- (void)onClickDanmakuIcon;
- (void)onClickDanmakuInputView;
- (void)handleDanmakuInputViewClick;
- (BOOL)isFromDanmakuMessage;
- (id)model;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)extra;
- (void)reset;

@end

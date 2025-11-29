@class AWERecordSelectMusicComponent, FPStateFlow, UIView;
@protocol ACCScrollStringButtonProtocol, FPUIComponent;

@interface AWERecordSelectMusicViewHolder : NSObject <FPUIHolder>

@property (class, readonly, nonatomic) Class componentType;

@property (retain, nonatomic) AWERecordSelectMusicComponent *component;
@property (retain, nonatomic) UIView<ACCScrollStringButtonProtocol> *selectMusicButton;
@property (retain, nonatomic) FPStateFlow *stateFlow;
@property (retain, nonatomic) id<FPUIComponent> typeErasedComponent;

- (void)didClickSelectMusicButton;
- (void)didClickCloseButtonOnMusicButton;
- (void)addStateFlowStateChanged;
- (void)refreshInitialMusicCover;
- (void).cxx_destruct;
- (id)initWith:(id)a0;

@end

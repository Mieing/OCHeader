@class HTSEventContext, NSMutableDictionary, IESLivePSComponentConfigModel, NSString, IESLivePublicScreenContext, NSNumber, IESLivePublicScreenView;

@interface IESLivePublicScreenHighValueMaskAttachment : NSObject <IESLivePublicScreenHighValueMaskService, IESLiveInteractAction, IESLivePSCommonAttachmentProtocol>

@property (retain, nonatomic) NSMutableDictionary *maskHeightMap;
@property (nonatomic) double curMaskHeight;
@property (retain, nonatomic) IESLivePSComponentConfigModel *placeHolderConfigModel;
@property (nonatomic) unsigned long long topContainerBizComponentCount;
@property (nonatomic) double placeHolderHeight;
@property (retain, nonatomic) NSNumber *maskHeightForDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) IESLivePublicScreenView *publicScreenView;
@property (retain, nonatomic) IESLivePublicScreenContext *publicScreenContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ didAttach;
@property (copy, nonatomic) id /* block */ didDetach;

- (void)didSetAttachingDIContext;
- (BOOL)shouldActive;
- (void)adjustTopMaskHeight:(double)a0 bizScene:(id)a1;
- (BOOL)isHighValueAreaMoveDownScene;
- (void)startInteractiveWithScene:(unsigned long long)a0;
- (void)endInteractiveWithScene:(unsigned long long)a0;
- (void)setupBizComponentCount:(unsigned long long)a0;
- (void)willAddTopComponentWithConfigModel:(id)a0;
- (void)willRemoveTopComponentWithConfigModel:(id)a0;
- (id)abilityProtocol;
- (void)updatePlaceHolderViewWithHeight:(double)a0;
- (void)refreshMaskHeight;
- (void)setTopMaskHeightForDelay:(id)a0;
- (void).cxx_destruct;
- (id)type;
- (void)detach;
- (void)attach;
- (BOOL)isHorizontal;

@end

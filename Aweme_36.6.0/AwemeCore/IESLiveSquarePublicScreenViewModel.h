@class HTSEventContext, NSString, IESLiveGCDTimer, IESLiveMessageSquareApi;
@protocol IESLivePublicScreenSquareMsgCollectionProvider;

@interface IESLiveSquarePublicScreenViewModel : IESLivePublicScreenViewModel <IESLivePublicScreenEventObserver, IESLivePublicScreenSettingChangedAction, IESLivePublicScreenLayoutSubscriber, IESLivePSAttachmentAction>

@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveMessageSquareApi *squareApi;
@property (retain, nonatomic) IESLiveGCDTimer *fetchTimer;
@property (weak, nonatomic) id<IESLivePublicScreenSquareMsgCollectionProvider> squareMsgCollectionProvider;
@property (nonatomic) BOOL hasRequested;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)refreshConfig;
- (void)willUnmount;
- (void)publicScreenLayoutChanged:(id)a0 forType:(unsigned long long)a1;
- (void)touchCellWithPoint:(struct CGPoint { double x0; double x1; })a0 node:(id)a1 cell:(id)a2;
- (void)didNodeDisplayOnce:(id)a0;
- (void)cell:(id)a0 highlighted:(BOOL)a1 bgView:(id)a2 node:(id)a3;
- (id)nodeStyleConfig;
- (void)willAppearFromInfoModel:(id)a0;
- (void)willDisappearToInfoModel:(id)a0;
- (id)dataFlowConfig;
- (void)setupPublicScreenViewModel;
- (double)fontSizeWithType:(unsigned long long)a0;
- (void)fontSizeTypeChanged:(unsigned long long)a0;
- (id)cellLongPressBackgroundColor;
- (void)didAttachAttachment:(id)a0;
- (void)fetchMoreSquareMessageWithScene:(long long)a0;
- (void)startFetchTimer;
- (void)stopFetchTimer;
- (void).cxx_destruct;
- (id)cellBackgroundColor;

@end

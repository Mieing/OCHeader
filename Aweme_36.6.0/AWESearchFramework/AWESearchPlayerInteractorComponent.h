@class AWESearchStandardVideoPlayerInteractorView, AWESearchEventDispather, NSDictionary, AWESearchPlayerInteractorComponentModel, UIView, NSMutableArray, NSString;
@protocol AWESearchComponentProtocol, AWESearchPlayerInteractorBottomContainerComponentProvider, AWESearchPlayerInteractorLeftBottomContainerComponentProvider, AWESearchProgressBarComponentProvider, AWESearchPlayerInteractorTitleContainerComponentProvider, AWESearchPlayerInteractorRightBottomContainerComponentProvider, AWESearchPlayerInteractorLeftTopContainerComponentProvider, AWESearchTripleSpeedComponentProvider, AWESearchPlayerInteractorClearScreenComponentProvider, AWESearchContainerProtocol, AWESearchPlayerInteractorComponentBroadCast;

@interface AWESearchPlayerInteractorComponent : AWESearchComponent <AWESearchPlayerInteractorComponentProvider>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWESearchPlayerInteractorComponentModel *interactorModel;
@property (retain, nonatomic) AWESearchStandardVideoPlayerInteractorView *interactorView;
@property (retain, nonatomic) id<AWESearchPlayerInteractorLeftTopContainerComponentProvider> leftTopContainerComponent;
@property (retain, nonatomic) id<AWESearchPlayerInteractorLeftBottomContainerComponentProvider> leftBottomContainerComponent;
@property (retain, nonatomic) id<AWESearchPlayerInteractorRightBottomContainerComponentProvider> rightBottomContainerComponent;
@property (retain, nonatomic) id<AWESearchPlayerInteractorBottomContainerComponentProvider> bottomContainerComponent;
@property (retain, nonatomic) id<AWESearchPlayerInteractorTitleContainerComponentProvider> titleContainerComponent;
@property (retain, nonatomic) id<AWESearchTripleSpeedComponentProvider> tripleSpeedComponent;
@property (retain, nonatomic) id<AWESearchProgressBarComponentProvider> progressComponent;
@property (retain, nonatomic) id<AWESearchPlayerInteractorClearScreenComponentProvider> clearScreenComponent;
@property (retain, nonatomic) NSMutableArray *broadCastArray;
@property (nonatomic) BOOL disappearBottomContianer;
@property (weak, nonatomic) id<AWESearchPlayerInteractorComponentBroadCast> broadCast;
@property (retain, nonatomic) NSMutableArray *receiveProtocolArray;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (copy, nonatomic) NSDictionary *dictLogExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getCreatSubComponentsArrayWithModel:(id)a0;
+ (BOOL)enableClearScreen;

@end

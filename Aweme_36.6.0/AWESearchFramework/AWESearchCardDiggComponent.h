@class AWESearchCardDiggButton, AWESearchEventDispather, AWESearchCardDiggModel, NSDictionary, NSString, NSMutableArray;
@protocol AWESearchComponentProtocol, AWEAwemePlayInteractionInteractorProtocol, AWESearchContainerProtocol;

@interface AWESearchCardDiggComponent : AWESearchComponent <AWESearchCardDiggComponentProvider>

@property (retain, nonatomic) AWESearchCardDiggModel *model;
@property (retain, nonatomic) AWESearchCardDiggButton *diggButton;
@property (retain, nonatomic) id<AWEAwemePlayInteractionInteractorProtocol> interactor;
@property (retain, nonatomic) NSMutableArray *broadCastArray;
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

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;

@end

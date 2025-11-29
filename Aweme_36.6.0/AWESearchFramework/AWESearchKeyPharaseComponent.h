@class AWESearchEventDispather, NSString, NSDictionary, AWESearchKeyPharaseComponentModel, AWESearchKeyPharaseView, NSMutableArray;
@protocol AWESearchBusinessVideoPlayerComponentProvider, AWESearchContainerProtocol, AWESearchComponentProtocol;

@interface AWESearchKeyPharaseComponent : AWESearchComponent <AWESearchKeyPharaseComponentProvider>

@property (retain, nonatomic) AWESearchKeyPharaseView *keyPhraseView;
@property (retain, nonatomic) AWESearchKeyPharaseComponentModel *model;
@property (nonatomic) double keyPhraseWidth;
@property (nonatomic) BOOL hasShowkeyPhraseView;
@property (copy, nonatomic) id /* block */ keyPhraseTask;
@property (retain, nonatomic) NSMutableArray *receiveProtocolArray;
@property (weak, nonatomic) id<AWESearchBusinessVideoPlayerComponentProvider> playerProvider;
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
+ (struct CGSize { double x0; double x1; })p_calculateComponentSize:(double)a0 withModel:(id)a1;

@end

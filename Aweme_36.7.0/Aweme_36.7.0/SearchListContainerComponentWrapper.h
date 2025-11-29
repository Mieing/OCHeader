@class NSString, LynxListContainerComponentWrapper, AWESearchAutoPlayHandler;
@protocol SearchDynamicElementProtocol;

@interface SearchListContainerComponentWrapper : NSObject <AWESearchAutoPlayCardProtocol, SearchDynamicContainerProtocol>

@property (nonatomic) BOOL needResendBecomeActiveMessageFlag;
@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) NSString *parentSessionId;
@property (nonatomic) long long index;
@property (retain, nonatomic) id<SearchDynamicElementProtocol> lynxElementView;
@property (weak, nonatomic) LynxListContainerComponentWrapper *lynxWrapper;
@property (copy, nonatomic) id /* block */ cellDidBecomeActive;
@property (copy, nonatomic) id /* block */ cellDidResignActive;
@property (copy, nonatomic) id /* block */ cellDidForceBecomeActive;
@property (copy, nonatomic) id /* block */ cellDidForceResignActive;
@property (nonatomic) BOOL isActive;
@property (weak, nonatomic) AWESearchAutoPlayHandler *autoPlayHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)searchElementForceBecomeActive;
- (void)searchElementDidFinishBind;
- (void)attachSearchElement;
- (id)findSearchElement;
- (void)addLynxWrapper:(id)a0;
- (void)removeLynxWrapper;
- (void)searchElementEndForceBecomingActive;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)didResignActive;
- (void)willEnterFullScreen;
- (id)activeView;

@end

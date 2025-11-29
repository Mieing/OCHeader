@class NSArray, NSString;
@protocol IESLiveMultiLinkerProvider;

@interface IESLiveMultilLinkerRelinkAnchorViewModel : NSObject <IESLiveInteractiveUserServiceDelegate, IESLiveInteractAnchorLinkersViewDelegate>

@property (copy, nonatomic) NSArray *linkers;
@property (copy, nonatomic) NSArray *currentSelectedUsers;
@property (nonatomic) BOOL relinkAnchorStartEnabled;
@property (weak, nonatomic) id<IESLiveMultiLinkerProvider> mLinkerProvider;
@property (copy, nonatomic) NSString *toastStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)multiLinkerUserService:(id)a0 didInteractiveListUpdated:(id)a1;
- (void)interactAnchorLinkersView:(id)a0 clickedLinker:(id)a1;
- (void)interactAnchorLinkersView:(id)a0 selectedLinkersChange:(id)a1;
- (void)relinkAnchor:(id)a0 completion:(id /* block */)a1;
- (id)setupRelinkAnchorLinkers:(id)a0;
- (void)updateRelinkAnchorStartButtonStatus;
- (id)getLinkerModelWithUser:(id)a0 showSelected:(BOOL)a1;
- (void).cxx_destruct;

@end

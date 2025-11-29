@class IESECLiveIconsContentGroupView, NSString, IESECLiveReplayDataStore;

@interface IESECLiveReplayRitTagView : UIView <IESECLiveReplayComponentViewProtocol>

@property (retain, nonatomic) IESECLiveIconsContentGroupView *ritsTagView;
@property (retain, nonatomic) IESECLiveReplayDataStore *dataStore;
@property (copy, nonatomic) id /* block */ tagTotalWidthDidUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dataStoreChanged;
- (void)clickUserRightsView:(id)a0;
- (void).cxx_destruct;
- (void)update:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

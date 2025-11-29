@class NSTimer, UIView, NSArray, AWEAwemeModel, NSString, UIImageView, NSDictionary, UICollectionView, UILabel;

@interface AFDRichAwemeFullPageCoCreatorContainer : UIView <UICollectionViewDelegate, UICollectionViewDataSource, AWEUserMessage, AFDRichAwemeFullPageCoCreatorContainerProtocol>

@property (retain, nonatomic) UIView *infoContainer;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIImageView *indicator;
@property (retain, nonatomic) UICollectionView *coCreatorsCollectionView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSArray *acceptedCoCreators;
@property (retain, nonatomic) NSTimer *liveCheckTimer;
@property (copy, nonatomic) id /* block */ showCoCreatorPanel;
@property (copy, nonatomic) id /* block */ showCoCreatorPostListPanel;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)updateWithAweme:(id)a0;
- (void)startCheckCoCreatorLiveStatusTimer:(BOOL)a0;
- (id)coCreatorModelWithAuthor;
- (void)trackFollow:(id)a0;
- (void)trackEnterPersonalDetail:(id)a0;
- (void)tapInfoLabelAction;
- (void)followUserWithIndexPath:(id)a0 cell:(id)a1;
- (void)onFollowStatusChanged:(id)a0 status:(long long)a1 error:(id)a2;
- (void)enterUserProfilePage:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)dealloc;
- (void)updateUI;

@end

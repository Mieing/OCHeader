@class NSArray, UICollectionView, NSString, UILabel, UIView;
@protocol IESIMMessageProtocol;

@interface AWEIMNewcomerReportWelcomerListViewController : AWEIMHalfScreenContainerViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) id<IESIMMessageProtocol> iesMsg;
@property (retain, nonatomic) NSArray *model;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__setupUI;
- (void)__fetchData;
- (id)initWithIesMsg:(id)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;

@end

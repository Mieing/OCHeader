@class NSArray, NSString, HTSLiveMessageListNode;
@protocol IESLivePSFloatSheetDelegate;

@interface IESLivePSFloatSheetPanelViewModel : NSObject <UICollectionViewDelegate, UICollectionViewDataSource>

@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) HTSLiveMessageListNode *node;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } referNodeRect;
@property (nonatomic) Class cellClass;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (weak, nonatomic) id<IESLivePSFloatSheetDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)dealloc;
- (void)dismissSelf;

@end

@class LynxUIComponent, NSIndexPath, NSString;

@interface LynxCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) LynxUIComponent *ui;
@property (retain, nonatomic) NSIndexPath *updateToPath;
@property (nonatomic) BOOL loading;
@property (retain, nonatomic) NSString *itemKey;
@property (nonatomic) long long operationID;
@property (nonatomic) BOOL isPartOnLayout;

- (id)removeLynxUI;
- (void)addLynxUI:(id)a0;
- (void)adjustComponentFrame;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)dealloc;
- (void)applyLayoutAttributes:(id)a0;
- (void)restartAnimation;

@end

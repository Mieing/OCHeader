@class IESECWinReplayCollectionSingleCell, NSString, IESECWinReplayCollectionDoubleCell, UICollectionViewCell, UITapGestureRecognizer;
@protocol IESECWinReplayCollectionCellProtocol, IESECWinReplayCollectionCellDelegate;

@interface IESECWinListKitReplayCollectionCell : UICollectionViewCell <IESECWinReplayCollectionCellProtocol> {
    UICollectionViewCell<IESECWinReplayCollectionCellProtocol> *_contentCell;
}

@property (retain, nonatomic) IESECWinReplayCollectionSingleCell *singleCell;
@property (retain, nonatomic) IESECWinReplayCollectionDoubleCell *doubleCell;
@property (retain, nonatomic) UITapGestureRecognizer *cellTapGesture;
@property (nonatomic) unsigned long long cellType;
@property (copy, nonatomic) id /* block */ cellClick;
@property (weak, nonatomic) id<IESECWinReplayCollectionCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)injectContentCell:(id)a0;
- (void)cellDidClick;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;

@end

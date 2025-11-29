@class DUXPopover;
@protocol ACCUploadStickerCollectionViewCellDelegate;

@interface ACCUploadStickerCollectionViewCell : ACCBaseStickerCollectionViewCell

@property (retain, nonatomic) DUXPopover *deletePopover;
@property (copy, nonatomic) id /* block */ deleteBlock;
@property (weak, nonatomic) id<ACCUploadStickerCollectionViewCellDelegate> delegate;

- (void)addLongPressGesture;
- (void)showDeleteTip;
- (void).cxx_destruct;
- (void)handleLongPressGesture:(id)a0;

@end

@class NSHashTable;

@interface MMUIBaseWindow : UIWindow

@property (retain, nonatomic) NSHashTable *stickerViews;

- (void)didAddSubview:(id)a0;
- (void)addStickerView:(id)a0;
- (void)removeStickerView:(id)a0;
- (void).cxx_destruct;

@end

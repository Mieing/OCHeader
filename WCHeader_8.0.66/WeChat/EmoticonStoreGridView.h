@class NSString;
@protocol EmoticonStoreGridViewDelegate;

@interface EmoticonStoreGridView : MMImageGridView

@property (nonatomic) long long m_currentSelectIndex;
@property (weak, nonatomic) id<EmoticonStoreGridViewDelegate> delegate;
@property (retain, nonatomic) NSString *m_emoticonPid;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)handleTap:(id)a0;
- (void)handleLongPress:(id)a0;
- (long long)getRealIndexFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)showPreviewAtIndex:(long long)a0;
- (void).cxx_destruct;

@end

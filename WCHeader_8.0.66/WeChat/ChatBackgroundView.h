@class NSIndexPath, ChatBackgroundItem;
@protocol ChatBackgroundViewDelegate;

@interface ChatBackgroundView : MMUIControl

@property (retain, nonatomic) ChatBackgroundItem *m_cbItem;
@property (retain, nonatomic) NSIndexPath *m_indexPath;
@property (weak, nonatomic) id<ChatBackgroundViewDelegate> m_delegate;
@property (nonatomic) long long m_index;
@property (nonatomic) BOOL bShowSelect;

- (void)initViewWithData;
- (void)onClick;
- (long long)getStatus;
- (void)setStatus:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andData:(id)a1;
- (void)startDownloadingAnimation;
- (void).cxx_destruct;

@end

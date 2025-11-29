@class ChatRoomToolWeAppInfo, MMUILabel, MMWebImageView;

@interface ChatRoomToolWeAppCollectionCell : MMUIView

@property (retain, nonatomic) MMWebImageView *m_appIconView;
@property (retain, nonatomic) MMUILabel *m_titleLabel;
@property (retain, nonatomic) ChatRoomToolWeAppInfo *m_chatRoomToolWeAppInfo;

+ (struct CGSize { double x0; double x1; })getCellSize;
+ (struct CGSize { double x0; double x1; })getCellIconSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetView;
- (void)updateCellWithWeAppInfo:(id)a0;
- (void)resizeTitleLabel;
- (void).cxx_destruct;

@end

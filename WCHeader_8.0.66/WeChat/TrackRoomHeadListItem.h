@class UITapGestureRecognizer, NSString, UIImageView, MMHeadImageView;
@protocol TrackRoomHeadListItemDelegate;

@interface TrackRoomHeadListItem : MMUIView {
    UIImageView *_normalBgImageView;
    UIImageView *_selectedBgImageView;
    MMHeadImageView *_headImageView;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (nonatomic) BOOL selected;
@property (retain, nonatomic) NSString *username;
@property (weak, nonatomic) id<TrackRoomHeadListItemDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)onSingleTap:(id)a0;
- (void).cxx_destruct;

@end

@class UIImageView, FacingMember;

@interface RSCreateRoomHeadImageView : MMUIView {
    UIImageView *m_statusView;
}

@property (retain, nonatomic) FacingMember *m_facingMember;

+ (struct CGSize { double x0; double x1; })getHeadImageSize;

- (id)initWithFacingMember:(id)a0;
- (void)updateWithFacingMember:(id)a0;
- (void).cxx_destruct;

@end

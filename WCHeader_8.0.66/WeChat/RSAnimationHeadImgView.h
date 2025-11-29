@class NSString, UIImageView, UILabel, RadarSearchMember, MMHeadImageView;

@interface RSAnimationHeadImgView : MMUIView {
    UILabel *_displayName;
    UIImageView *_avatarView;
    MMHeadImageView *_headImage;
}

@property (retain, nonatomic) RadarSearchMember *member;
@property (retain, nonatomic) NSString *m_nsRemarkName;

+ (struct CGSize { double x0; double x1; })getHeadImageSize;

- (id)initWithRadarSearchMember:(id)a0 remarkName:(id)a1;
- (void)initView;
- (void)initHeadImageView;
- (void)initAvatarView;
- (void)initDisplayNameView;
- (void).cxx_destruct;

@end

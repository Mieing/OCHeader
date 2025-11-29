@class UIImageView, NSString;

@interface FakeHeadImageView : MMUIView {
    UIImageView *m_headImageView;
    UIImageView *m_borderImageView;
    NSString *m_usrName;
    BOOL m_bRoundedCorner;
}

@property (nonatomic) unsigned char headUseScene;
@property (nonatomic) unsigned char headCategory;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) unsigned int conerSize;

- (id)initWithRoundCorner:(BOOL)a0;
- (void)layoutSubviews;
- (void)updateWithUserName:(id)a0;
- (id)getRealUserName:(id)a0;
- (void).cxx_destruct;

@end

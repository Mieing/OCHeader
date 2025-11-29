@class EmoticonCustomManageAddLogic, NSString, UIImageView, UIImage, UIView, NSData;

@interface EmoticonPickViewController : MMUIViewController <EmoticonCustomManageAddLogicDelegate> {
    NSData *m_imageData;
}

@property (retain, nonatomic) UIView *m_emoticonBkgView;
@property (retain, nonatomic) NSString *m_localMd5;
@property (retain, nonatomic) UIImageView *m_imageView;
@property (retain, nonatomic) EmoticonCustomManageAddLogic *addEmoticonLogic;
@property (retain, nonatomic) UIImage *m_image;

- (id)navigationBarBackgroundColor;
- (BOOL)navigationBarBlurEffect;
- (void)initToolBar;
- (void)showTipsAndQuit:(id)a0;
- (void)Cancel;
- (void)Confirm;
- (void)viewDidLoad;
- (void)AddEmoticonFinishedWithWrap:(id)a0 IsSuccessed:(BOOL)a1;
- (void).cxx_destruct;

@end

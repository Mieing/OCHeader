@class UIImageView, NSString, UIView;

@interface AppStandardContentExternalLoadImageView : UIView <AppStandardContentExternalLoadImageDelegate>

@property (retain, nonatomic) UIImageView *loadFailIcon;
@property (retain, nonatomic) UIView *externalImgView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)layoutSubviews;
- (void)onLoadDone:(id)a0;
- (void)onLoadFail;
- (double)targetLoadFailSize;
- (void).cxx_destruct;

@end

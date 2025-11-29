@class UIImageView, IESLiveScreenRecordStore, IESLiveRecordProgressView;

@interface IESLiveBackRecordToolbarItem : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) IESLiveRecordProgressView *progressView;
@property (retain, nonatomic) IESLiveScreenRecordStore *store;
@property (nonatomic) BOOL isLandscape;

- (void)bindStore:(id)a0;
- (void).cxx_destruct;
- (void)setStatus:(unsigned long long)a0;
- (void)setProgress:(double)a0;
- (void)setupUI;

@end

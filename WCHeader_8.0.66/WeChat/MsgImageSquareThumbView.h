@class CMessageWrap, UILabel, UIView, AppFileNodeProgressView, MMWebImageView, UIImageView, YYImage, SimpleImgInfo, NSString, UIProgressView, MMUIActivityIndicatorView;

@interface MsgImageSquareThumbView : MMUIButton <YYAsyncLayerDelegate, SimpleImgInfoDelegate> {
    NSString *m_imageSquarePath;
    id m_target;
    SEL m_shouldSelectSEL;
}

@property (retain, nonatomic) UIView *m_iconView;
@property (retain, nonatomic) UILabel *m_titleLabel;
@property (retain, nonatomic) UILabel *m_timeLabel;
@property (retain, nonatomic) UILabel *m_sizeLabel;
@property (retain, nonatomic) UIView *m_timeBkgView;
@property (retain, nonatomic) UIView *m_markSelectedView;
@property (retain, nonatomic) UIImageView *m_markSelectedImageView;
@property (retain, nonatomic) UIView *m_disabledMaskView;
@property (retain, nonatomic) UIImageView *m_markExpiredImageView;
@property (retain, nonatomic) CMessageWrap *m_msgWrap;
@property (retain, nonatomic) UILabel *m_percentLabel;
@property (retain, nonatomic) UIProgressView *m_percentProgress;
@property (retain, nonatomic) MMUIActivityIndicatorView *m_downloadingFlower;
@property (retain, nonatomic) AppFileNodeProgressView *m_circleProgress;
@property (retain, nonatomic) MMWebImageView *m_webImgView;
@property (nonatomic) BOOL m_bUseWebImg;
@property (retain, nonatomic) YYImage *m_image;
@property (nonatomic) BOOL m_isFromFav;
@property (retain, nonatomic) SimpleImgInfo *m_imgInfo;
@property (retain, nonatomic) NSString *m_imageLocalPath;
@property (nonatomic) BOOL m_selectable;
@property (nonatomic) BOOL m_isSelected;
@property (nonatomic) BOOL m_isDisabled;
@property (nonatomic) BOOL m_isExpired;
@property (nonatomic) BOOL m_isLoading;
@property (nonatomic) double m_downloadPercent;
@property (nonatomic) double m_circlePercent;
@property (nonatomic) BOOL m_showMaskWhenDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;
+ (id)getColorForIconName:(id)a0;
+ (BOOL)isLongImage:(id)a0;
+ (void)compressMsgImgTOSquareImg:(id)a0;
+ (id)compressImage:(id)a0;
+ (struct CGSize { double x0; double x1; })calcCompressImageSize:(id)a0;

- (id)newAsyncDisplayTask;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (void)dealloc;
- (id)initWithImgInfo:(id)a0 AndChatName:(id)a1 msgWrap:(id)a2 selectable:(BOOL)a3;
- (id)initWithImgInfo:(id)a0 AndChatName:(id)a1 msgWrap:(id)a2 selectable:(BOOL)a3 thumbSize:(struct CGSize { double x0; double x1; })a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcSelectIconFrame;
- (id)accessibilityLabel;
- (void)setTimeLabel:(unsigned long long)a0;
- (void)startLoadSquareImageIfExist;
- (void)startLoadImageSuqareImgDir;
- (void)updateImagePath:(id)a0;
- (void)startLoadImageWithGCD;
- (id)currentImage;
- (id)getWebImgView;
- (id)getIconView;
- (void)updateSelectViewAnimated:(BOOL)a0;
- (void)startPopUpAnimation:(id)a0 originScale:(double)a1;
- (void)toggleSelection;
- (void)setTarget:(id)a0 forSelectAction:(SEL)a1;
- (id)accessibilityHint;
- (BOOL)accessibilityPerformMagicTap;
- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;

@end

@class YYImage, NSString, UIImageView, CMessageWrap, SimpleChatLogInfo, UILabel, UIView;

@interface ResourceMsgImageSquareThumbView : MMUIButton <YYAsyncLayerDelegate, SimpleImgInfoDelegate>

@property (retain, nonatomic) SimpleChatLogInfo *m_msgInfo;
@property (retain, nonatomic) NSString *m_imageSquarePath;
@property (retain, nonatomic) UILabel *m_titleLabel;
@property (retain, nonatomic) UILabel *m_timeLabel;
@property (retain, nonatomic) UILabel *m_sizeLabel;
@property (retain, nonatomic) UIView *m_timeBkgView;
@property (retain, nonatomic) CMessageWrap *m_msgWrap;
@property (retain, nonatomic) UIView *m_markSelectedView;
@property (retain, nonatomic) UIImageView *m_markSelectedImageView;
@property (nonatomic) BOOL bUsePureColorBackground;
@property (retain, nonatomic) YYImage *m_image;
@property (nonatomic) BOOL bIsSelected;
@property (copy, nonatomic) id /* block */ selectBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (id)initWithMsgInfo:(id)a0 viewSize:(struct CGSize { double x0; double x1; })a1;
- (void)loadImgBackground;
- (void)updateSelectViewAnimated:(BOOL)a0;
- (void)startPopUpAnimation:(id)a0 originScale:(double)a1;
- (void)toggleSelection;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (BOOL)accessibilityPerformMagicTap;
- (unsigned long long)accessibilityTraits;
- (id)newAsyncDisplayTask;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (void).cxx_destruct;

@end

@class UIView, NSString, UIImageView, ACCGradientView, AEKMediaContainerView, NSMutableArray;
@protocol AEKMediaBlurViewProtocol, AEKSequencePlayerBusinessDelegate;

@interface AEKSequencePlayerScrollViewCell : UIView <AEKSequencePlayerScrollViewCellProtocol, AEKSequencePlayerBusinessProtocol>

@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) ACCGradientView *bgView;
@property (retain, nonatomic) AEKMediaContainerView *preview;
@property (retain, nonatomic) AEKMediaContainerView *subPreview;
@property (retain, nonatomic) NSMutableArray *extraViews;
@property (nonatomic) BOOL onlyPreview;
@property (nonatomic) struct CGSize { double width; double height; } mediaSize;
@property (copy, nonatomic) NSString *UUID;
@property (nonatomic) BOOL coverImageViewSizeEqualToMeidaSize;
@property (readonly, nonatomic) UIView<AEKMediaBlurViewProtocol> *blurView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AEKSequencePlayerBusinessDelegate> businessDelegate;

- (void)setupBlurViewIfNeeded;
- (void)removeAllExtraView;
- (void)updateGradientColors:(id)a0;
- (void)updateExtraView:(id)a0 withScale:(double)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end

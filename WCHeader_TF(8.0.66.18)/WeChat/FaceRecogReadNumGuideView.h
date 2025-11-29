@class UIButton, NSString, UIImageView, FaceRecogGuideInfo, UIScrollView, UIView, MMUILabel;
@protocol FaceRecogGuideViewDelegate;

@interface FaceRecogReadNumGuideView : MMUIView <UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *pageScrollView;
@property (retain, nonatomic) MMUILabel *guideTitleLabel;
@property (retain, nonatomic) UIImageView *firstStepNumberIconView;
@property (retain, nonatomic) MMUILabel *firstStepContentLabel;
@property (retain, nonatomic) UIImageView *firstStepIconView;
@property (retain, nonatomic) UIImageView *secondStepNumberIconView;
@property (retain, nonatomic) MMUILabel *secondStepContentLabel;
@property (retain, nonatomic) UIImageView *secondStepIconView;
@property (retain, nonatomic) UIButton *finishBtn;
@property (retain, nonatomic) UIView *connectLineView;
@property (retain, nonatomic) FaceRecogGuideInfo *guideInfo;
@property (weak, nonatomic) id<FaceRecogGuideViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)initView;
- (void)initScrollView;
- (void)initFirstPage;
- (void)initLineView;
- (void)initData;
- (void).cxx_destruct;

@end

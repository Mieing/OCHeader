@protocol IESLivePKRecommendTabBasePanelViewDelegate;

@interface IESLivePKRecommendTabBasePanelView : UIView

@property (weak, nonatomic) id<IESLivePKRecommendTabBasePanelViewDelegate> delegate;

- (void).cxx_destruct;
- (void)updateData;

@end

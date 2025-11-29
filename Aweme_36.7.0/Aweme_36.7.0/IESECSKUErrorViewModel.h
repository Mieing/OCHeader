@protocol IESECSKUErrorViewContainer;

@interface IESECSKUErrorViewModel : IESECYataBaseViewModel

@property (weak, nonatomic) id<IESECSKUErrorViewContainer> viewContainer;
@property (nonatomic) unsigned long long errorType;

- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (double)viewSizeScale;
- (void).cxx_destruct;

@end

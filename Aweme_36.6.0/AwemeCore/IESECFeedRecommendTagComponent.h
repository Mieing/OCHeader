@class NSMutableArray;

@interface IESECFeedRecommendTagComponent : UIView <IESECLLComponent>

@property (retain, nonatomic) NSMutableArray *tagArray;

+ (id /* block */)recommendTag;

- (void)updateUIWithModel:(id)a0;
- (void)__remakeTagConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

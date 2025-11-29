@class MMComponentData;

@interface MMComponent : UIView

@property (retain, nonatomic) MMComponentData *m_componentData;

+ (double)calHeightWithComData:(id)a0;

- (id)initWithComData:(id)a0;
- (void)updateWithComData:(id)a0;
- (void)configContentLayout;
- (void)setHighlightContent:(id)a0 Keywords:(id)a1;
- (void).cxx_destruct;

@end

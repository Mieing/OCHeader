@interface AWEDCFeedCellTagConfig : AWEDCFeedBaseConfig

@property (nonatomic) double recommendIconWidth;
@property (nonatomic) double recommendIconHeight;
@property (nonatomic) double recommendLabelFont;
@property (nonatomic) double recommendContainerHeight;
@property (copy, nonatomic) id /* block */ tagStringBlock;
@property (copy, nonatomic) id /* block */ shouldShowTagBlock;
@property (copy, nonatomic) id /* block */ disableShowTagBlock;

- (void).cxx_destruct;

@end

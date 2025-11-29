@interface AWEDCFeedCellDescriptionConfig : AWEDCFeedBaseConfig

@property (nonatomic) long long contentElementLines;
@property (nonatomic) BOOL useDetermineContentElementLines;
@property (nonatomic) BOOL shouldHiddenDescriptionElement;
@property (copy, nonatomic) id /* block */ descriptionStringBlock;
@property (copy, nonatomic) id /* block */ descriptionElementAlphaBlock;

- (void)setupDefaultConfig;
- (void).cxx_destruct;

@end

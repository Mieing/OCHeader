@interface AWEDCFeedCellCommonLynxConfig : AWEDCFeedBaseConfig

@property (nonatomic) BOOL enable;
@property (nonatomic) long long commonLynxSpacing;
@property (copy, nonatomic) id /* block */ extraSpecicalCardJudgeBlock;
@property (copy, nonatomic) id /* block */ shouldUseHunterHeightBlock;
@property (copy, nonatomic) id /* block */ onLynxDidChangeIntrinsicContentSizeBlock;

- (void).cxx_destruct;
- (id)init;

@end

@class NSString, UILabel, NSArray;

@interface EVFXBlendModeView : UIView {
    UILabel *m_BlendModeLabel;
    int m_BlendModeIndex;
    NSArray *m_BlendModeTexts;
}

@property (readonly, weak, nonatomic) NSString *currentBlendModeText;

- (id)init;
- (void)initBlendModeText;
- (void)initBlendModeLabel;
- (id)switchBlendMode;
- (void).cxx_destruct;

@end

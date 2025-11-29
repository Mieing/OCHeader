@class AWEBasicModeFeedVideoButton;

@interface AWEBasicModeRightButtonElement : AWEBasicModeFakeElement

@property (retain, nonatomic) AWEBasicModeFeedVideoButton *actionButton;
@property (nonatomic) unsigned long long type;

- (void)p_setup;
- (id)initWithRightButtonType:(unsigned long long)a0;
- (void)setModel:(id)a0;
- (void).cxx_destruct;

@end

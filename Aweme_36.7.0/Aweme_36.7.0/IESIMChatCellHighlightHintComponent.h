@class NSString, AWEIMChatCellHintModel;

@interface IESIMChatCellHighlightHintComponent : AWEIMChatCellComponentBase

@property (copy, nonatomic) NSString *highlightHint;
@property (nonatomic) BOOL disableHighlight;
@property (retain, nonatomic) AWEIMChatCellHintModel *displayingHintModel;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)p_refreshDisableHighlight;
- (void)p_reloadPresenter;
- (void).cxx_destruct;

@end

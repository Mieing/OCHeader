@class NSString, NSAttributedString;

@interface AWEIMThinkingContentProps : AWEIMUIViewPresenterProps

@property (nonatomic) unsigned long long thinkingStatus;
@property (retain, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSAttributedString *thinkingContent;
@property (nonatomic) BOOL needFoldThink;
@property (copy, nonatomic) id /* block */ tapAction;

- (void).cxx_destruct;

@end

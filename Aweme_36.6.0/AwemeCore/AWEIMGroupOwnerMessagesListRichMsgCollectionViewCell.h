@class YYLabel;

@interface AWEIMGroupOwnerMessagesListRichMsgCollectionViewCell : AWEIMGroupOwnerMessagesListCollectionViewCell

@property (retain, nonatomic) YYLabel *contentLabel;

+ (id)highlightTokenAttributes;
+ (id)identifier;

- (void)renderCustomizeContentWithVM:(id)a0;
- (void)tryBuildTruncationToken;
- (void)__buildFoldTruncationToken;
- (id)__unfoldTruncationToken;
- (id)__buildTrunctionTokenWithTokenText:(id)a0;
- (void)didClickToken;
- (void)foldCell;
- (void)unfoldCell;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

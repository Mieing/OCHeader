@interface AWECommentPanelContainerSwiftImpl.CommentViewControllerPanelContentSetting : NSObject <AWECommentViewControllerContentSettingProtocol> {
    void /* function */ cellElementActionShouldBlock;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ container;
}

@property (nonatomic) unsigned long long emptyStyle;
@property (nonatomic, copy) id /* block */ cellElementActionShouldBlock;
@property (nonatomic) double briefEmptyCellHeight;

- (void)insertComment:(id)a0 replyID:(id)a1 fromNotice:(BOOL)a2;
- (void)highlightCommentWithID:(id)a0;
- (void)replyWithCommentID:(id)a0 editingMethodType:(long long)a1;
- (void)replyWithCommentID:(id)a0 beginInputSource:(unsigned long long)a1 editingMethodType:(long long)a2;
- (void)scrollTo:(long long)a0 commentID:(id)a1 animated:(BOOL)a2;
- (void)scrollTo:(long long)a0 commentID:(id)a1 position:(unsigned long long)a2 animated:(BOOL)a3;
- (void)scrollToTargetComment:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end

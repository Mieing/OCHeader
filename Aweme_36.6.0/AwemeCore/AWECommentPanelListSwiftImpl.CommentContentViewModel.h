@interface AWECommentPanelListSwiftImpl.CommentContentViewModel : NSObject <AWECommentContentViewModelProtocol> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ shouldForceBuildContent;
    void /* unknown type, empty encoding */ theme;
    void /* unknown type, empty encoding */ changed;
    void /* unknown type, empty encoding */ height;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ truncationToken;
    void /* unknown type, empty encoding */ content;
}

@property (nonatomic) BOOL isColorWhite;
@property (nonatomic) BOOL expanded;

- (id)buildIfNeeded:(BOOL)a0;
- (id)richContent;
- (id)currentTextLayout;
- (id)finalContent;
- (void).cxx_destruct;
- (id)build;
- (id)init;
- (double)calculateHeight;

@end

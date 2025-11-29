@interface AWECommentStudioSwiftImpl.CommentSectionStudioHandler : AWECommentSwiftBizUI.CommentSectionBaseHandler <AWECommentSectionControllerTimingProtocol, AWECommentSectionVideoTitleAnchorProtocol, NSObject> {
    void /* unknown type, empty encoding */ context;
}

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)sectionDidEndDisplayingCell:(id)a0 index:(long long)a1;
- (void)anchorDidShow:(id)a0 trackInfo:(id)a1;
- (id /* block */)anchorTapBlock:(id)a0;
- (id)anchorType;
- (void).cxx_destruct;
- (id)init;

@end

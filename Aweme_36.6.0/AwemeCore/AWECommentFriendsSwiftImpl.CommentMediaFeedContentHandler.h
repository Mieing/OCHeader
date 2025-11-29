@interface AWECommentFriendsSwiftImpl.CommentMediaFeedContentHandler : BDMultiContentContainer.BaseContentHandler <AFDRichContentProgressDurationProtocol, AFDRichContentHandlerProtocol> {
    void /* unknown type, empty encoding */ commentMediaFeedImageSectionViewModel;
    void /* unknown type, empty encoding */ defaultIndex;
    void /* unknown type, empty encoding */ needDisplayProgress;
}

- (BOOL)shouldSpectialHandlePlayState;
- (void)updatePlayerController:(id)a0;
- (BOOL)shouldFillProgressWhenScrollWithCurrentIndex:(long long)a0;
- (void).cxx_destruct;

@end

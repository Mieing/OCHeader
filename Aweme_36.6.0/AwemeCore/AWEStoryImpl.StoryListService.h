@interface AWEStoryImpl.StoryListService : HTSService <AWEStoryListService> {
    void /* unknown type, empty encoding */ isEnterWaterfallDetail;
}

- (id)listViewControllerWithEnterFrom:(id)a0 enterMethod:(id)a1 referString:(id)a2;
- (unsigned long long)reloadListViewControllerTimeThreshold;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipVideoFrameForVideoSize:(struct CGSize { double x0; double x1; })a0 inContainerViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withAlbumContentMode:(unsigned long long)a2;
- (void)setEnterWaterfallDetailFlag:(BOOL)a0;
- (BOOL)getEnterWaterfallDetailFlag;
- (id)init;
- (id)listViewController;

@end

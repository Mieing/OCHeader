@class AWECommentLongPressPanelContext;

@interface AWEIMShareImpl.ShareCommentHorizontalSectionViewModel : AWEBaseListSectionViewModel <AWECommentLongPressPanelSectionViewModelProtocol> {
    void /* unknown type, empty encoding */ currentSectionHeight;
    void /* unknown type, empty encoding */ interactingGestures;
}

@property (nonatomic, retain) AWECommentLongPressPanelContext *commentPageContext;

- (double)sectionTotalHeight;
- (id)asynchronousWithGestures;
- (void)fetchSectionDataSource;
- (void).cxx_destruct;
- (id)init;

@end

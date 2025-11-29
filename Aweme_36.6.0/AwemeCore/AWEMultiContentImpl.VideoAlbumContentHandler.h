@interface AWEMultiContentImpl.VideoAlbumContentHandler : BDMultiContentContainer.BaseContentHandler <AFDAlbumHandlerIndexable>

@property (nonatomic, readonly) long long currentIndex;

- (void)scrollToIndex:(long long)a0 offset:(id)a1;

@end

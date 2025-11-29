@interface MMFinderLiveArticlePromoteEditPanel : MMFinderLiveLinkPromoteEditPanel

@property (copy, nonatomic) id /* block */ completion;

- (id)titleText;
- (id)validUriPrefixes;
- (void)onLinkConfirmed:(id)a0;
- (void)fetchArticleExtInfoForLink:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end

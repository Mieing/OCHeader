@class NSString;
@protocol AWEKnowledgeBookService;

@interface AWEFeedTemplateAnchorPublicationConfig : AWEFeedTemplateAnchorBaseConfig <AWEBookDetailPageTabListViewControllerDelegate>

@property (retain, nonatomic) id<AWEKnowledgeBookService> bookService;
@property (nonatomic) BOOL videoIsPlayingWhenOpenBookDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

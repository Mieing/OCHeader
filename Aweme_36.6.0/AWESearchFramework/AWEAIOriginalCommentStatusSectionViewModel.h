@class AWEAIOriginalPageContext, NSString;

@interface AWEAIOriginalCommentStatusSectionViewModel : AWEBaseListSectionViewModel <NSObject>

@property (nonatomic) long long commentCount;
@property (retain, nonatomic) AWEAIOriginalPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void).cxx_destruct;

@end

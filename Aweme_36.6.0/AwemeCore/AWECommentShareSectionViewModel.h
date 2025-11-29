@class AWECommentLongPressPanelContext, NSArray, NSString, AWEShareTokenAlert;

@interface AWECommentShareSectionViewModel : AWEBaseListSectionViewModel <AWECommentLongPressPanelSectionViewModelProtocol>

@property (retain, nonatomic) AWEShareTokenAlert *alert;
@property (copy, nonatomic) NSArray *cellModels;
@property (nonatomic) BOOL noFriends;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWECommentLongPressPanelContext *commentPageContext;

- (double)sectionTotalHeight;
- (void)fetchSectionDataSource;
- (void).cxx_destruct;

@end

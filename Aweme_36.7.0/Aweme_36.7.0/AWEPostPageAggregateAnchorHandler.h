@class AWENewPublishAggregateAnchorTableViewCell, NSString;
@protocol AWEPostPageAnchorService, AWEPostPageContext;

@interface AWEPostPageAggregateAnchorHandler : NSObject <AWEPostPageAggregateAnchorService>

@property (weak, nonatomic) AWENewPublishAggregateAnchorTableViewCell *elementCell;
@property (weak, nonatomic) id<AWEPostPageAnchorService> anchorService;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) long long removeBadgeSignal;
@property (nonatomic) BOOL isPOIAnchorWhenSelected;
@property (nonatomic) BOOL anchorHasMounted;
@property (readonly, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;

- (void)bindServices:(id)a0;
- (id)elementCellIconImage;
- (id)elementCellTitleLabelText;
- (id)elementCellDetailViewIconImage;
- (id)elementCellDetailViewTagText;
- (void)updateAggregateAnchorElementCell:(id)a0;
- (void).cxx_destruct;

@end

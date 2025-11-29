@interface WCFinderProfileOverviewPaidCollectionSectionCtrl : WCFinderProfilePaidCollectionBaseSectionCtrl

@property (nonatomic) BOOL sectionExposed;

+ (id)sectionDefines;

- (void)onHeaderWillDisplay:(id)a0;
- (id)sections;

@end

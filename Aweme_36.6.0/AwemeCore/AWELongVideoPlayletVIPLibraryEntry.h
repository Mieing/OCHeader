@class NSString;

@interface AWELongVideoPlayletVIPLibraryEntry : NSObject <AWEShowQuickAccessEntryProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)entryWidth;
- (id)entryViewForContext:(id)a0;
- (unsigned long long)entryPriorityForContext:(id)a0;
- (BOOL)shouldActiveEntryForContext:(id)a0;
- (void)handleEntryEventForContext:(id)a0;
- (unsigned long long)entryDisplayAnimationTypeForContext:(id)a0;
- (unsigned long long)entryType;

@end

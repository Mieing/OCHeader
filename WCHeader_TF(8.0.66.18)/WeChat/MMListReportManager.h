@class MMTListAdapter, NSMutableDictionary;
@protocol MMListReportManagerDelegate;

@interface MMListReportManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *exposedSet;
@property (weak, nonatomic) MMTListAdapter *adapter;
@property (nonatomic) double keyboardHeight;
@property (weak, nonatomic) id<MMListReportManagerDelegate> delegate;

- (id)initWithAdapter:(id)a0;
- (void)listDidDisplayCell:(id)a0 forRowAtIndexPath:(id)a1 sectionController:(id)a2;
- (void)keyboardDidShow:(id)a0;
- (void)keyboardDidHide:(id)a0;
- (void)tryExposeItem:(id)a0 inSectionController:(id)a1 indexPath:(id)a2;
- (void)clearCache;
- (void).cxx_destruct;

@end

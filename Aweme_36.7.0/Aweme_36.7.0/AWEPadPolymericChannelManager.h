@class AWEPadListViewSectionFactory, NSDictionary;

@interface AWEPadPolymericChannelManager : NSObject

@property (retain, nonatomic) AWEPadListViewSectionFactory *listViewSectionFactory;
@property (retain, nonatomic) NSDictionary *pageTitleMap;

+ (id)sharedManager;

- (id)buildSectionListWithRawData:(id)a0 pageKey:(id)a1 enableGrid:(BOOL)a2 enableLight:(BOOL)a3;
- (id)discardedArchPageKeySet;
- (id)localBreakPointEnablePageKeyArray;
- (id)listViewSectionFactoryWithPageKey:(id)a0 enableGrid:(BOOL)a1;
- (BOOL)enableBreakPointWithPageKey:(id)a0;
- (void).cxx_destruct;

@end

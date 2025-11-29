@class AWEGrouponPageContext, NSMutableDictionary, NSString;

@interface AWEGrouponFeedPluginManager : NSObject <AWEGrouponPageScrollProtocol>

@property (retain, nonatomic) NSMutableDictionary *pluginMap;
@property (weak, nonatomic) AWEGrouponPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)findPluginByClass:(Class)a0;
- (BOOL)registerPlugin:(id)a0 error:(id *)a1;
- (id)storageKeyForPlugin:(id)a0;
- (id)storageKeyForPluginClassName:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;

@end

@class NSString;

@interface AWEIMSearchResultCollectionViewHomeSearchCell : AWEIMSearchResultCollectionViewCell <AWEIMRendererProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)p_configAvatarWithModel:(id)a0 context:(id)a1;
- (id)p_searchItemModelWithSearchText:(id)a0;

@end

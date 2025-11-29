@class NSString;

@interface IESIMTranspondListPluginImpl : NSObject <IESIMTranspondListPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;

- (Class)getShareMutiselectListCollectionViewCellClass;
- (id)getShareMutiselectListCollectionViewCellIdentifier;
- (Class)getTranspondListMoreCollectionViewCellClass;
- (id)getTranspondListMoreCollectionViewCellIdentifier;
- (void)configTranspodListCellIsHot:(BOOL)a0;

@end

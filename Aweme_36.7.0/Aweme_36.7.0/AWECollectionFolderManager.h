@class NSString;

@interface AWECollectionFolderManager : NSObject <AWECollectionFolderManagerProtocol>

@property (nonatomic) BOOL blockUpdateFolderPrivacyState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)followCollectionFolderWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)getItemsIDWithAwemeArray:(id)a0;
+ (id)addURLString:(id)a0 withItemId:(id)a1;
+ (id)maintainCollectionFolderWithParams:(id)a0 maintainOption:(unsigned long long)a1 completion:(id /* block */)a2;
+ (void)fetchFolderInfoWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)upLoadCollectionFolderEnterEventWithParam:(id)a0;
+ (Class)collectionDetailViewControllerClass;
+ (BOOL)enableCollectionFolderOptimize;
+ (id)sharedInstance;


@end

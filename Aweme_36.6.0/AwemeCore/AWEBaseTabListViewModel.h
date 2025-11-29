@class NSArray, NSString;

@interface AWEBaseTabListViewModel : NSObject <AWEBaseTabListViewModelOverride>

@property (retain, nonatomic) id headerModel;
@property (retain, nonatomic) id defaultTabItemModel;
@property (copy, nonatomic) NSArray *tabItemModelsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

@end

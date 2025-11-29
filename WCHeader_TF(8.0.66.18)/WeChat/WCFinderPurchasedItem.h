@class FinderEcObject, NSString, FinderMixObject, WCFinderDataItem;

@interface WCFinderPurchasedItem : NSObject

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) FinderMixObject *mixObject;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) FinderEcObject *ecObject;
@property (readonly, nonatomic) NSString *itemId;

+ (id)itemWith:(id)a0;

- (id)validItem;
- (void).cxx_destruct;

@end

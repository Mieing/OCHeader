@class NSString, WAFileSpaceStatusAppItem;

@interface WAFileStorageStatusSortAppItem : NSObject

@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) WAFileSpaceStatusAppItem *appItem;

- (id)description;
- (long long)compare:(id)a0;
- (void).cxx_destruct;

@end

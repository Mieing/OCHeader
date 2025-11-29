@class NSString, MAOfflineItem, NSArray;

@interface MAOfflineMapListDataItem : NSObject <NSCopying>

@property (readonly, nonatomic, getter=isCollapsable) BOOL collapsable;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (copy, nonatomic) NSString *itemTitle;
@property (retain, nonatomic) MAOfflineItem *offlineItem;
@property (retain, nonatomic) NSArray *listItems;

+ (void)expandItemsWithListItems:(id)a0 resutlArray:(id)a1;
+ (long long)calculateCountForListItems:(id)a0;
+ (id)allItemsExpandedWithListItems:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

@class WCLocationInfo;

@interface WCFinderLocationSelectItem : NSObject

@property (retain, nonatomic) WCLocationInfo *locationInfo;
@property (nonatomic) unsigned long long itemType;

+ (id)selectableLocationItemWithLocation:(id)a0;
+ (id)selectOtherItem;
+ (id)emptyLocationItem;

- (void).cxx_destruct;

@end

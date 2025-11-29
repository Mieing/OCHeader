@class WCFinderDataItem;

@interface WCFinderNativeDramaDataItemContext : NSObject

@property (retain, nonatomic) WCFinderDataItem *dataItem;

+ (id)contextWithIdentifier:(unsigned long long)a0;
+ (id)contextWithDataItem:(id)a0;

- (BOOL)isNativeDrama;
- (BOOL)isNativeDramaCanPlay;
- (id)info;
- (void).cxx_destruct;

@end

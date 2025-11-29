@class NSString, WCFinderDataItem;

@interface WCFinderShareItemInfo : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *fromFeedId;
@property (retain, nonatomic) WCFinderDataItem *fromDataItem;

- (void).cxx_destruct;

@end

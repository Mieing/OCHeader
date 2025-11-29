@class NSString, WCFinderDataItem;

@interface WCFinderPlaceholderFeedItem : NSObject <WCFinderFeedArrayConvert>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *localTid;
@property (retain, nonatomic) WCFinderDataItem *item;

+ (id)feedArrayConvertTidFromObject:(id)a0;
+ (id)feedArrayConvertVMFromItem:(id)a0 scene:(int)a1;
+ (id)placeholderItemWithDataItem:(id)a0;

- (void).cxx_destruct;

@end

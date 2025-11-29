@class NSString;

@interface AWEFoodTakeoutUpdateAnchorInfo : NSObject

@property (copy, nonatomic) NSString *storeID;
@property (copy, nonatomic) NSString *shopID;
@property (copy, nonatomic) NSString *subProductId;
@property (nonatomic) BOOL needAddress;
@property (nonatomic) BOOL isFallback;

- (void).cxx_destruct;

@end

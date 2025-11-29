@class NSArray, NSString, WCFinderDataItem, NSDate, WCFinderJumpInfo;

@interface WCFinderJumpInfoAsyncLoadRecord : NSObject

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) WCFinderJumpInfo *jumpInfo;
@property (retain, nonatomic) NSDate *lastFetchingTime;
@property (copy, nonatomic) NSArray *styles;
@property (copy, nonatomic) NSString *stylesIdentifier;

- (void).cxx_destruct;

@end

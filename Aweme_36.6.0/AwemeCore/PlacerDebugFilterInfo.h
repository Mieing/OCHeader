@class NSString;

@interface PlacerDebugFilterInfo : GPBMessage

@property (nonatomic) long long itemId;
@property (nonatomic) BOOL hasItemId;
@property (copy, nonatomic) NSString *filterReason;
@property (nonatomic) BOOL hasFilterReason;

+ (id)descriptor;

@end

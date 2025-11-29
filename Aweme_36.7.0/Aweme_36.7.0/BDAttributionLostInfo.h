@class NSString, NSArray;

@interface BDAttributionLostInfo : NSObject

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *typeString;
@property (copy, nonatomic) NSArray *lostTimestamps;

- (void).cxx_destruct;

@end

@class NSString, NSNumber;

@interface IESForestLinkHeaderItem : NSObject

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *as;
@property (copy, nonatomic) NSString *rel;
@property (retain, nonatomic) NSNumber *cdnExpiredTime;

- (void).cxx_destruct;

@end

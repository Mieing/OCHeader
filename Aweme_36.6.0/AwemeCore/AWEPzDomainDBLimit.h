@class NSString, NSDate;

@interface AWEPzDomainDBLimit : NSObject

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSDate *earliestDate;
@property (nonatomic) int maxLines;

- (void).cxx_destruct;
- (id)description;

@end

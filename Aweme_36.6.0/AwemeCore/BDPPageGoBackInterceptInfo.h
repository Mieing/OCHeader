@class NSString;

@interface BDPPageGoBackInterceptInfo : NSObject

@property (copy, nonatomic) NSString *triggerReason;
@property (nonatomic) double show;
@property (nonatomic) double hide;
@property (nonatomic) BOOL hasReport;

- (void).cxx_destruct;
- (id)toDictionary;

@end

@class NSString;

@interface AudioMonoServiceObj : NSObject

@property (nonatomic) unsigned long long monoServiceBusinessType;
@property (nonatomic) unsigned long long subBusinessType;
@property (nonatomic) BOOL isPaused;
@property (copy, nonatomic) NSString *monoServiceId;

- (void).cxx_destruct;

@end

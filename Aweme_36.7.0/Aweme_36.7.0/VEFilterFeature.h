@class NSString;

@interface VEFilterFeature : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) unsigned long long filterType;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;

@end

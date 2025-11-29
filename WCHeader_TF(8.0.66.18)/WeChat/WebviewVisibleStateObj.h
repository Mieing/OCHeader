@class NSString;

@interface WebviewVisibleStateObj : NSObject

@property (nonatomic) BOOL visible;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSString *reason;

- (id)description;
- (void).cxx_destruct;

@end

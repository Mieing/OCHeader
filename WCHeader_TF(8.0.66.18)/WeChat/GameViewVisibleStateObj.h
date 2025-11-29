@class NSString;

@interface GameViewVisibleStateObj : NSObject

@property (nonatomic) BOOL visible;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSString *reason;

- (void).cxx_destruct;

@end

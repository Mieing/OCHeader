@class NSString;

@interface WATaskBarCloseInfo : NSObject

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long actionType;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned long long pageType;
@property (nonatomic) unsigned long long page;
@property (nonatomic) unsigned long long durationInMs;

- (void).cxx_destruct;

@end

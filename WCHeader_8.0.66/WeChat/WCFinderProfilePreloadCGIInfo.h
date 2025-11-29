@class NSString;

@interface WCFinderProfilePreloadCGIInfo : NSObject

@property (nonatomic) unsigned long long start;
@property (nonatomic) unsigned long long end;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long errorCode;

- (id)reportJson;
- (void).cxx_destruct;

@end

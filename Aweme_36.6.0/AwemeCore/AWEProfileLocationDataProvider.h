@class NSArray;

@interface AWEProfileLocationDataProvider : NSObject

@property (retain, nonatomic) NSArray *locationSegments;

+ (id)sharedInstance;

- (id)loadLocationsIfNeed;
- (void).cxx_destruct;
- (id)init;

@end

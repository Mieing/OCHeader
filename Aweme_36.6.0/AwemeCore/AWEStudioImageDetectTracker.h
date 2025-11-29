@class NSMutableDictionary;

@interface AWEStudioImageDetectTracker : NSObject

@property (retain, nonatomic) NSMutableDictionary *timestamps;

- (void)markStep:(long long)a0;
- (void)trackWithResult:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

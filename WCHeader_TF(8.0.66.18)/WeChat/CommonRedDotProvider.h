@class NSArray;

@interface CommonRedDotProvider : NSObject <IFindFriendRedDotProvider>

@property (retain, nonatomic) NSArray *finderRedDotPaths;

- (id)initWithPaths:(id)a0;
- (id)checkToGetRedDotInfo;
- (void).cxx_destruct;

@end

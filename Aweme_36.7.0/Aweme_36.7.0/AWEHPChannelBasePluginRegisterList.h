@class NSMutableArray;

@interface AWEHPChannelBasePluginRegisterList : NSObject

@property (retain, nonatomic) NSMutableArray *topPairs;
@property (retain, nonatomic) NSMutableArray *bottomPairs;

- (id)getTopPluginControllerWithChannel:(id)a0;
- (id)getBottomPluginControllerWithChannel:(id)a0;
- (BOOL)registerPluginWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

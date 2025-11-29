@class NSMutableArray;

@interface AWEBottomContainerTrackManager : NSObject

@property (retain, nonatomic) NSMutableArray *currentShowElements;
@property (retain, nonatomic) NSMutableArray *currentShowElementsVisiableType;
@property (retain, nonatomic) NSMutableArray *shouldShowElements;
@property (retain, nonatomic) NSMutableArray *shouldShowElementsVisiableType;

- (void)addTrackElement:(id)a0 appear:(BOOL)a1 clearAppearCache:(BOOL)a2;
- (void)addTrackElement:(id)a0 appear:(BOOL)a1;
- (void)trackElementWithModel:(id)a0 referString:(id)a1;
- (void).cxx_destruct;
- (void)resetData;

@end

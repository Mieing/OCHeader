@class NSString, NSArray, BDByteCastPPPlayControlInfo;

@interface BDLEPlayerItem : NSObject

@property (copy, nonatomic) NSString *startDramaId;
@property (copy, nonatomic) NSArray *dramaBeans;
@property (retain, nonatomic) BDByteCastPPPlayControlInfo *playControlInfo;
@property (nonatomic) BOOL fakePlay;

- (void).cxx_destruct;

@end

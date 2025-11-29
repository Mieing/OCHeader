@class NSString, NSMutableArray, NSMutableDictionary;

@interface BDPPageTimelineCollectGroup : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) double time;
@property (retain, nonatomic) NSMutableArray *points;
@property (retain, nonatomic) NSMutableDictionary *commonParam;

- (void).cxx_destruct;

@end

@class NSMutableArray, NSMutableSet;

@interface AWEDanmakuCommonDataInfo : NSObject

@property (retain, nonatomic) NSMutableArray *danmakuResponseArray;
@property (retain, nonatomic) NSMutableArray *deleteDanmakuIds;
@property (retain, nonatomic) NSMutableSet *activitySet;
@property (retain, nonatomic) NSMutableArray *postDanmaKuIds;

- (void).cxx_destruct;
- (id)init;

@end

@class BDARewardedVideoAdBaseController;
@protocol AWEBDARVLynxMoreRewardAdapter;

@interface CMCRVModel : NSObject

@property (retain, nonatomic) BDARewardedVideoAdBaseController *controller;
@property (copy, nonatomic) id /* block */ loadBlock;
@property (copy, nonatomic) id /* block */ openBlock;
@property (retain, nonatomic) id<AWEBDARVLynxMoreRewardAdapter> lynxMoreReward;

- (void).cxx_destruct;

@end

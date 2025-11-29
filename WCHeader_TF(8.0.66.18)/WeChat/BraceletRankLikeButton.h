@class DeviceRankInfo;

@interface BraceletRankLikeButton : MMUIButton

@property (retain) DeviceRankInfo *m_rankInfo;

- (id)initWithDeviceRankInfo:(id)a0;
- (void)initView;
- (void)animatChangeToLikeState:(BOOL)a0;
- (void).cxx_destruct;

@end

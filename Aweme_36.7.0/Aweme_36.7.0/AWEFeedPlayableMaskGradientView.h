@class NSString, AWEFeedPlayableMaskModel;

@interface AWEFeedPlayableMaskGradientView : UIView

@property (retain, nonatomic) AWEFeedPlayableMaskModel *maskModel;
@property (nonatomic) unsigned long long showType;
@property (copy, nonatomic) NSString *section;

- (id)p_bgColor;
- (void)p_removeSublayers;
- (void)p_configBgColorForPlayableFinish;
- (void)p_configBgColorForPlayableNotShown;
- (void)configWithModel:(id)a0 maskShowType:(unsigned long long)a1 section:(id)a2;
- (void).cxx_destruct;

@end

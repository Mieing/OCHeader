@class NSString, AWEAwemeModel;

@interface AWEFeedLongVideoCellTracker : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSString *pageName;

- (id)commonParams;
- (id)getRecType:(id)a0;
- (void)trackVideoCardClick:(id)a0;
- (void)trackVideoCardShow:(id)a0;
- (void)trackLvTipShow:(id)a0;
- (void)trackLvTipClick:(id)a0;
- (void)traceEnterPersonalDetail:(id)a0;
- (void).cxx_destruct;

@end

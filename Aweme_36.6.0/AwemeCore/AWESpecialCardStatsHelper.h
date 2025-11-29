@interface AWESpecialCardStatsHelper : NSObject

@property (copy, nonatomic) id /* block */ waittingCompletionBlock;
@property (nonatomic) long long tapTotalEnterStayTime;
@property (nonatomic) long long tapClickLastShowTime;
@property (nonatomic) BOOL isWaittingVideoInfo;

- (void)resetConfigPreVideoInfo;
- (void)configPreVideoInfo:(id)a0 forModel:(id)a1;
- (void)waitPreVideoInfoWithBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end

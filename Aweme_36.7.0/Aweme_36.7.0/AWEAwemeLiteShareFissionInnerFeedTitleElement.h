@class DUXBaseLabel, NSString;

@interface AWEAwemeLiteShareFissionInnerFeedTitleElement : AWEAwemeDetailNaviBarBaseElement <AWELiteShareFissionInnerFeedMessage>

@property (retain, nonatomic) DUXBaseLabel *innerFeedTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateShareElementRewardInfo:(BOOL)a0 shareAmount:(long long)a1 taskStatus:(long long)a2 statusCode:(long long)a3 rewardText:(id)a4;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;

@end

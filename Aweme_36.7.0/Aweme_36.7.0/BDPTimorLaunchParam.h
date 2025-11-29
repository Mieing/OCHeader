@class BDPSchema, BDPXScreenParameters, NSDictionary, NSURL, NSError, BDPOneCardModel, UIViewController;

@interface BDPTimorLaunchParam : NSObject

@property (copy, nonatomic) NSURL *URL;
@property (nonatomic) long long launchMode;
@property (nonatomic) long long openStyle;
@property (copy, nonatomic) BDPSchema *schema;
@property (retain, nonatomic) NSError *schemaError;
@property (retain, nonatomic) UIViewController *presentingVC;
@property (nonatomic) double openURLTime;
@property (nonatomic) double openURLTimestamp;
@property (retain, nonatomic) BDPXScreenParameters *XScreenParams;
@property (retain, nonatomic) BDPOneCardModel *oneCardModel;
@property (retain, nonatomic) NSDictionary *feedGameInfo;
@property (copy, nonatomic) id /* block */ willEnterFullScreenBlk;
@property (copy, nonatomic) id /* block */ didEnterFullScreenBlk;
@property (copy, nonatomic) id /* block */ willEnterSmallScreenBlk;
@property (copy, nonatomic) id /* block */ didEnterSmallScreenBlk;
@property (copy, nonatomic) id /* block */ viewWillAppearBlk;
@property (copy, nonatomic) id /* block */ viewDidAppearBlk;
@property (copy, nonatomic) id /* block */ viewWillDisappearBlk;
@property (copy, nonatomic) id /* block */ viewDidDisappearBlk;
@property (copy, nonatomic) id /* block */ loadStageBlk;
@property (copy, nonatomic) id /* block */ willCloseXScreenWindowBlk;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)init;

@end

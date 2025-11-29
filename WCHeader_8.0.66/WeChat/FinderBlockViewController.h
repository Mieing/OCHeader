@class OpenApiParameter, NSString, WCFinderJumpInfo;
@protocol OpenApiFinderBizDelegate;

@interface FinderBlockViewController : MMUIViewController

@property (retain, nonatomic) OpenApiParameter *parameter;
@property (retain, nonatomic) NSString *openUrl;
@property (retain, nonatomic) WCFinderJumpInfo *jumpInfo;
@property (weak, nonatomic) id<OpenApiFinderBizDelegate> delegate;

- (id)initWithInfoData:(id)a0 andOpenUrl:(id)a1;
- (id)initWithInfoData:(id)a0 andOpenUrl:(id)a1 jumpInfo:(id)a2;
- (void)viewDidLoad;
- (void)doAuthWithUrl:(id)a0;
- (void)configJumpInfoWithParameter:(id)a0;
- (void)onReturn;
- (void)didNeedRefreshTokenWithResult:(id)a0;
- (void).cxx_destruct;

@end

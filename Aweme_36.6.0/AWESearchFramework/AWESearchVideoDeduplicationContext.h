@class UIViewController, AWEAwemeModel;

@interface AWESearchVideoDeduplicationContext : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) double playTime;
@property (nonatomic) double progressTime;
@property (nonatomic) BOOL isFromDetail;
@property (weak, nonatomic) UIViewController *searchViewController;

- (void).cxx_destruct;

@end

@class NSString, AWEAwemeModel;

@interface AWEFeedDetailBarActionBaseView : UIView

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;

- (void)updateAwemeModel:(id)a0;
- (void).cxx_destruct;
- (double)viewHeight;
- (double)viewWidth;

@end

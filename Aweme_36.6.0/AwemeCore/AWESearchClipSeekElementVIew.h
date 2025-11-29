@class NSString, AWEAwemeSearchQueryAnswerModel, UIImageView, UILabel;

@interface AWESearchClipSeekElementVIew : UIControl

@property (nonatomic) double maxWidth;
@property (nonatomic) double totalWidth;
@property (retain, nonatomic) AWEAwemeSearchQueryAnswerModel *model;
@property (copy, nonatomic) NSString *formattedTimeString;
@property (retain, nonatomic) UIImageView *seekIconView;
@property (retain, nonatomic) UILabel *startTimeLabel;
@property (retain, nonatomic) UILabel *textLabel;

- (id)formattedStartTimeForTime:(id)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (double)getWidth;
- (void)updateWithModel:(id)a0;

@end

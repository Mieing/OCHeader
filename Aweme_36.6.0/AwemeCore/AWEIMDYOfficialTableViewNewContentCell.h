@class AWEIMOfficialNewContentCardView;

@interface AWEIMDYOfficialTableViewNewContentCell : AWEIMDYOfficialTableViewContentCell

@property (retain, nonatomic) AWEIMOfficialNewContentCardView *pContentContainerView;

+ (id)identifier;

- (void)configWithModel:(id)a0 context:(id)a1 needTrackEvent:(BOOL)a2;
- (void).cxx_destruct;
- (id)contentContainerView;

@end

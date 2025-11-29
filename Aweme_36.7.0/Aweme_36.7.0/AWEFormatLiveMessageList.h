@interface AWEFormatLiveMessageList : IESLiveMessageListView

@property (copy, nonatomic) id /* block */ widthDidChangedBlock;
@property (nonatomic) double originWidth;

- (void)refreshUnreadTipView:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setup;

@end

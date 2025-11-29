@class NSAttributedString, AWEURLModel;

@interface AWEIMFeedInfoCardProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) NSAttributedString *invisibleAttStr;
@property (nonatomic) BOOL showPlayIcon;
@property (retain, nonatomic) AWEURLModel *imageUrl;
@property (copy, nonatomic) NSAttributedString *titleAttStr;
@property (copy, nonatomic) NSAttributedString *subtitleAttStr;

- (void).cxx_destruct;

@end

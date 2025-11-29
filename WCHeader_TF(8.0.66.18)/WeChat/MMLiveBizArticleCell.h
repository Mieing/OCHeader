@class BizAppMsgDetailInfo, MMUILabel, MMWebImageView;

@interface MMLiveBizArticleCell : UITableViewCell

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *datetimeLabel;
@property (retain, nonatomic) MMWebImageView *thumbnailImageView;
@property (retain, nonatomic) BizAppMsgDetailInfo *article;

+ (id)cellIdentifier;
+ (double)heightForArticle:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)articleDidUpdate;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end

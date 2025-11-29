@class AFDPrivacyPublishParamsModel;

@interface AWEPublishPrivacyTableViewCellViewModel : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) AFDPrivacyPublishParamsModel *paramsModel;
@property (nonatomic) long long userTotalCount;
@property (copy, nonatomic) id /* block */ editBlock;

- (id)exclusionTitle;
- (id)closeFriendsTitle;
- (id)mateAndDontShareTitle;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (id)contentTitle;
- (BOOL)shouldShowEditButton;
- (id)visibleTitle;

@end

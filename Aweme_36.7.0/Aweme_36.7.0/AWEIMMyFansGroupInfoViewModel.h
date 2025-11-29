@class NSString;

@interface AWEIMMyFansGroupInfoViewModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *inviteButtonTitle;
@property (copy, nonatomic) NSString *inviteIconName;

- (id)initWithGroupTotalCount:(long long)a0 memberTotalCount:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeWithString:(id)a0 attributes:(id)a1;
- (void).cxx_destruct;
- (double)cellHeight;

@end

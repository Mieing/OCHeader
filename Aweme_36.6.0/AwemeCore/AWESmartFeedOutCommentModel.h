@class NSString, AWEURLModel;

@interface AWESmartFeedOutCommentModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *commentID;
@property (copy, nonatomic) NSString *commentText;
@property (copy, nonatomic) NSString *userName;
@property (nonatomic) long long diggedCount;
@property (retain, nonatomic) AWEURLModel *avatarThumb;

+ (id)avatarThumbJSONAdapter;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

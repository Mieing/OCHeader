@class NSString;

@interface AFDBookUserCommentModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) float rating;
@property (nonatomic) long long defaultText;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

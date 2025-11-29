@class NSNumber, NSString, NSArray;

@interface AWEHotSearchCommentViewPointModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *viewPointID;
@property (retain, nonatomic) NSNumber *commentCount;
@property (copy, nonatomic) NSString *viewPointText;
@property (copy, nonatomic) NSArray *comments;
@property (copy, nonatomic) NSArray *avatarUrlList;
@property (retain, nonatomic) NSNumber *position;

+ (id)commentsJSONTransformer;
+ (id /* block */)isEqualBlock;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString, NSArray, NSNumber, AWEURLModel;

@interface AWEIMMyContentFeedbackDigModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *uid;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) AWEURLModel *urlModel;
@property (copy, nonatomic) NSArray *tags;

+ (id)urlModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

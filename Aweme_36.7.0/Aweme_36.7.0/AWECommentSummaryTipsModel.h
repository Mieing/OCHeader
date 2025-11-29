@class NSString, AWECommentSummaryTipsExtra;

@interface AWECommentSummaryTipsModel : AWEBaseApiModel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *jumpText;
@property (copy, nonatomic) NSString *jumpURL;
@property (copy, nonatomic) NSString *lightIconURL;
@property (copy, nonatomic) NSString *darkIconURL;
@property (nonatomic) BOOL hasRedPoint;
@property (retain, nonatomic) AWECommentSummaryTipsExtra *extra;

+ (id)extraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

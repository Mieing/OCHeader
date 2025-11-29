@class NSString, AWEAdEvaluateUserModel, NSArray, NSNumber;

@interface AWEAdEvaluateDetailModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *commentLabelsDesc;
@property (retain, nonatomic) AWEAdEvaluateUserModel *user;
@property (retain, nonatomic) NSNumber *rate;
@property (copy, nonatomic) NSString *commentContent;
@property (retain, nonatomic) NSArray *tags;
@property (retain, nonatomic) NSNumber *commentTime;
@property (nonatomic) BOOL userDigged;
@property (nonatomic) long long diggCount;
@property (copy, nonatomic) NSString *commentID;
@property (retain, nonatomic) NSArray *replyComment;
@property (retain, nonatomic) NSArray *picUrlList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userJSONTransformer;
+ (id)replyCommentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class AWEUserModel, NSString, NSArray, AWEAdFeedCommentAppendFeedbackModel, NSAttributedString, NSNumber;

@interface AWEAdFeedCommentDetailModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *commentLabelsDesc;
@property (copy, nonatomic) NSAttributedString *commentContentNoExpandAttributeString;
@property (copy, nonatomic) NSAttributedString *commentContentExpandAttributeString;
@property (retain, nonatomic) NSNumber *commentID;
@property (retain, nonatomic) NSNumber *groupID;
@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) long long grade;
@property (copy, nonatomic) NSString *commentContent;
@property (copy, nonatomic) NSArray *labels;
@property (retain, nonatomic) NSNumber *commentTime;
@property (retain, nonatomic) NSNumber *likesCount;
@property (nonatomic) BOOL liked;
@property (retain, nonatomic) NSNumber *replyCount;
@property (copy, nonatomic) NSArray *imageList;
@property (copy, nonatomic) AWEAdFeedCommentAppendFeedbackModel *appendFeedback;
@property (nonatomic) BOOL disableLLMCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userJSONTransformer;
+ (id)appendFeedbackJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

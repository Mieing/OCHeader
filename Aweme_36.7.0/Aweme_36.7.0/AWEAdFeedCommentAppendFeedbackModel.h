@class NSArray, NSString;

@interface AWEAdFeedCommentAppendFeedbackModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *imageList;
@property (copy, nonatomic) NSString *appendTime;
@property (copy, nonatomic) NSString *feedbackDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end

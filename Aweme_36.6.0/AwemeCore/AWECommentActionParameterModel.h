@class NSString, NSDictionary;

@interface AWECommentActionParameterModel : NSObject

@property (copy, nonatomic) NSString *commentID;
@property (copy, nonatomic) NSString *awemeID;
@property (nonatomic) long long actionType;
@property (nonatomic) long long levelType;
@property (nonatomic) long long replyStyle;
@property (nonatomic) long long adLinkType;
@property (copy, nonatomic) NSString *attitudeType;
@property (nonatomic) BOOL isXiguaVideo;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSDictionary *extraParams;

- (void).cxx_destruct;

@end

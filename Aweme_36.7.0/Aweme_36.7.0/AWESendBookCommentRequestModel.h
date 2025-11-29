@class NSString;

@interface AWESendBookCommentRequestModel : NSObject

@property (copy, nonatomic) NSString *bookID;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *replyID;
@property (copy, nonatomic) NSString *replyToReplyID;
@property (nonatomic) long long channelID;
@property (copy, nonatomic) NSString *city;
@property (nonatomic) long long timeFromInputToSend;
@property (nonatomic) long long timeFromVideoToCmt;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) float rating;

- (id)generateRequestParamsDict;
- (void).cxx_destruct;

@end

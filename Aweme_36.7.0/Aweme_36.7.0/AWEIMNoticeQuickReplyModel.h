@class NSString;

@interface AWEIMNoticeQuickReplyModel : NSObject

@property (copy, nonatomic) NSString *noticeSchema;
@property (copy, nonatomic) NSString *quoteText;
@property (copy, nonatomic) NSString *quoteTextName;
@property (copy, nonatomic) NSString *quoteTextContent;
@property (nonatomic) long long quoteNoticeType;

- (void).cxx_destruct;

@end

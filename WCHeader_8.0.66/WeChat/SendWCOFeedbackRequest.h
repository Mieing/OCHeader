@class BaseRequest, NSMutableArray;

@interface SendWCOFeedbackRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int level;
@property (nonatomic) int fbcount;
@property (retain, nonatomic) NSMutableArray *fblist;
@property (nonatomic) unsigned int roomId;

+ (void)initialize;

@end

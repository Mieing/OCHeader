@class NSString, NSMutableArray;

@interface AWEMediaDownloadFeedbackRecorderParserItem : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long count;
@property (retain, nonatomic) NSMutableArray *errorCodeArray;
@property (retain, nonatomic) NSMutableArray *messageArray;

- (void).cxx_destruct;

@end

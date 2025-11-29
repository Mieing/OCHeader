@class NSString, NSDictionary;

@interface WCFinderItemEventReportInfo : NSObject

@property (nonatomic) int commentScene;
@property (nonatomic) long long eventCode;
@property (nonatomic) unsigned long long eventTime;
@property (copy, nonatomic) NSString *eId;
@property (retain, nonatomic) NSDictionary *udfKV;
@property (nonatomic) int refCommentScene;

- (void).cxx_destruct;

@end

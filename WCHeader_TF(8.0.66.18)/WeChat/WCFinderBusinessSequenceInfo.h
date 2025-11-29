@interface WCFinderBusinessSequenceInfo : NSObject

@property (nonatomic) int pageId;
@property (nonatomic) long long timeStamp;

- (id)genReportJson;

@end

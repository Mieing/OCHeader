@class NSString;

@interface WCFinderEnterSourceReportInfoModel : NSObject

@property (copy, nonatomic) NSString *enterSourceFeedIDStr;
@property (copy, nonatomic) NSString *enterSourceUserStr;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (id)init;
- (id)reportJSONStr;
- (void).cxx_destruct;

@end

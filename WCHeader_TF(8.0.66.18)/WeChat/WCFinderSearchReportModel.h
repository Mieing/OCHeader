@class NSString, NSArray, NSDictionary;

@interface WCFinderSearchReportModel : NSObject

@property (nonatomic) unsigned long long searchScene;
@property (nonatomic) int commentScene;
@property (copy, nonatomic) NSString *searchSessionId;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSArray *autoKeywords;
@property (copy, nonatomic) NSDictionary *selectedAutoKeywords;
@property (nonatomic) BOOL isClick;

- (void)log;
- (id)tagStringFromDictonary:(id)a0;
- (id)objectToString:(id)a0;
- (void).cxx_destruct;

@end

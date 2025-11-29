@class NSString;

@interface WCFingertipSearchReportModel : WCSearchReportModel

@property (nonatomic) long long action;
@property (nonatomic) BOOL hasReddot;
@property (copy, nonatomic) NSString *hitWordList;
@property (copy, nonatomic) NSString *hitWordVersion;
@property (nonatomic) unsigned long long subScene;
@property (copy, nonatomic) NSString *exposedWord;
@property (copy, nonatomic) NSString *matchTypeList;
@property (nonatomic) unsigned long long msgContentLength;
@property (nonatomic) unsigned long long matchResult;
@property (nonatomic) unsigned int chatFingerPatternType;

- (id)initWithSNSItem:(id)a0 subScene:(unsigned long long)a1;
- (void)doReport;
- (void)doReport:(long long)a0;
- (void).cxx_destruct;

@end

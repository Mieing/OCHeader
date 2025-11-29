@class NSString;

@interface WCFinderOverviewSectionDef : NSObject

@property (nonatomic) long long secType;
@property (nonatomic) int pbSectionId;
@property (nonatomic) int jumpToTabId;
@property (retain, nonatomic) NSString *sectionTitle;
@property (nonatomic) long long moreBtnType;
@property (retain, nonatomic) NSString *reportName;
@property (retain, nonatomic) NSString *reportTabName;
@property (copy, nonatomic) id /* block */ saveCache;
@property (copy, nonatomic) id /* block */ fromCache;
@property (copy, nonatomic) id /* block */ contentChecker;
@property (copy, nonatomic) id /* block */ fromPBSection;
@property (retain, nonatomic) Class syncPageClass;
@property (copy, nonatomic) id /* block */ syncDataFromPage;
@property (copy, nonatomic) id /* block */ shouldShowTotalCount;
@property (nonatomic) BOOL enableClosure;
@property (copy, nonatomic) id /* block */ readSectionInfo;
@property (copy, nonatomic) id /* block */ showMoreButtonCondition;

- (id)init;
- (void).cxx_destruct;

@end

@class NSArray, NSDictionary, NSString, WCFinderOverviewSectionDef, FinderHomePageSectionInfo;

@interface WCFinderProfileOverviewSection : NSObject

@property (nonatomic) int commentScene;
@property (retain, nonatomic) WCFinderOverviewSectionDef *def;
@property (nonatomic) long long secType;
@property (retain, nonatomic) id data;
@property (nonatomic) long long elementCount;
@property (retain, nonatomic) NSArray *layouts;
@property (retain, nonatomic) NSDictionary *layoutMap;
@property (nonatomic) BOOL showAllButton;
@property (nonatomic) long long moreBtnType;
@property (nonatomic) BOOL displaySummary;
@property (nonatomic) BOOL isClosure;
@property (retain, nonatomic) NSString *observableTitle;
@property (readonly, nonatomic) NSString *reportName;
@property (retain, nonatomic) FinderHomePageSectionInfo *sectionInfo;

+ (id)sectionWithType:(long long)a0;
+ (long long)mapTabInfoType:(unsigned int)a0;
+ (id)nameForSecType:(long long)a0;

- (BOOL)shouldDisplay;
- (long long)displayElementRowCount:(long long)a0;
- (void).cxx_destruct;

@end

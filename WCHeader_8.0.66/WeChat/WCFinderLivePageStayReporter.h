@class NSString, NSMutableDictionary;

@interface WCFinderLivePageStayReporter : NSObject

@property (nonatomic) unsigned long long enterPageTime;
@property (retain, nonatomic) NSString *refPageId;
@property (retain, nonatomic) NSMutableDictionary *switchExtraDic;

+ (void)reportMoreLiveFollowFoldAction:(unsigned long long)a0 commentScene:(id)a1 tabType:(unsigned int)a2 subTabType:(unsigned int)a3;

- (id)init;
- (void)setupData;
- (void)updateRefPageId:(id)a0;
- (void)updateEnterPageTime;
- (void)reportPageStayEnterExpose:(id)a0 tabType:(unsigned int)a1 subTabType:(unsigned int)a2 commentScene:(id)a3 pageUdfKv:(id)a4;
- (void)reportPageStayQuitExpose:(id)a0 tabType:(unsigned int)a1 subTabType:(unsigned int)a2 commentScene:(id)a3 pageUdfKv:(id)a4;
- (void)cleanReportTabData;
- (void).cxx_destruct;

@end

@class NSString, NSMutableDictionary;

@interface WSAllTabRedDotInfo : NSObject

@property (retain, nonatomic) NSString *mSessionInAllTabRedDotReportString;
@property (retain, nonatomic) NSMutableDictionary *tabRedDotInfoMap;

- (id)init;
- (id)getTabRedDotInfoByCategory:(long long)a0;
- (void)configureTabNumberReddot:(id)a0 ctrlInfo:(id)a1 showInfo:(id)a2 category:(long long)a3;
- (void)configureTabContentReddot:(id)a0 showInfo:(id)a1 category:(long long)a2;
- (id)returnSessionInAllTabRedDotInfoReportString;
- (id)returnAllTabRedDotInfoReportString;
- (void)clear;
- (id)description;
- (void)recordSessionIn;
- (void)clearSessionIn;
- (void).cxx_destruct;

@end

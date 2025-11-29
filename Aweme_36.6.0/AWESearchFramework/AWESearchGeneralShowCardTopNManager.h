@class NSMutableArray, NSMutableDictionary;

@interface AWESearchGeneralShowCardTopNManager : NSObject

@property (retain, nonatomic) NSMutableArray *abstractShowTagArray;
@property (retain, nonatomic) NSMutableDictionary *showTagDict;

+ (id)shareInstance;

- (void)generalSearchCardDisplayWithContext:(id)a0 searchid:(id)a1 tagsManger:(id)a2;
- (void)showCardWith:(long long)a0 type:(id)a1 searchid:(id)a2;
- (BOOL)shouldReportTopNTagWith:(long long)a0 type:(id)a1 searchid:(id)a2;
- (id)hasShownTopNTagWithType:(id)a0 searchid:(id)a1;
- (void).cxx_destruct;

@end

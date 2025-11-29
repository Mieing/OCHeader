@class NSMutableArray, WCFinderBusinessCurrentRedDotInfo;

@interface WCFinderBusinessFeatureInfo : NSObject

@property (nonatomic) int businessType;
@property (nonatomic) BOOL isOpen;
@property (nonatomic) long long locationIndex;
@property (nonatomic) long long exitInterval;
@property (nonatomic) long long consumeReddotInterval;
@property (nonatomic) long long exposeReddotInterval;
@property (retain, nonatomic) NSMutableArray *clickWithReddotCountArray;
@property (retain, nonatomic) NSMutableArray *clickWithoutReddotCountArray;
@property (retain, nonatomic) NSMutableArray *reddotExposeCountArray;
@property (retain, nonatomic) NSMutableArray *reddotCtrValueArray;
@property (retain, nonatomic) WCFinderBusinessCurrentRedDotInfo *currentRedDotInfo;

- (id)initWithBusinessType:(int)a0;
- (id)genReportJson;
- (id)genReportByContainerArray:(id)a0;
- (id)genReportFloatByContainerArray:(id)a0;
- (void).cxx_destruct;

@end

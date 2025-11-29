@class NSString, NSDictionary, NSNumber, NSMutableArray;

@interface AWEDynamicCardStats : NSObject <NSCoding, AWEDynamicCardStatsProtocol>

@property (copy, nonatomic) NSDictionary *localStats;
@property (copy, nonatomic) NSDictionary *stats;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *awemeID;
@property (nonatomic) double lastSelectTimestamp;
@property (retain, nonatomic) NSNumber *isDislike;
@property (retain, nonatomic) NSNumber *isSkip;
@property (retain, nonatomic) NSMutableArray *poiIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)debugInfo;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

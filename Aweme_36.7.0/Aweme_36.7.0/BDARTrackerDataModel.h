@class NSDictionary, NSString, NSNumber;

@interface BDARTrackerDataModel : NSObject <NSCopying>

@property (copy, nonatomic) NSDictionary *originalDict;
@property (copy, nonatomic, setter=BDARSetvid:) NSString *vid;
@property (copy, nonatomic, setter=BDARSetrequestid:) NSString *requestid;
@property (copy, nonatomic, setter=BDARSettimestamp:) NSString *timestamp;
@property (copy, nonatomic, setter=BDARSetadType:) NSNumber *adType;
@property (copy, nonatomic, setter=BDARSetisLynx:) NSNumber *isLynx;

- (BOOL)addPropertyFromDictionary:(id)a0;
- (BOOL)addPropertyFromOtherModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

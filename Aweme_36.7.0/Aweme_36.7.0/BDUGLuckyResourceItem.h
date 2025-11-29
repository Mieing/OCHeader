@class NSString, NSNumber;

@interface BDUGLuckyResourceItem : BDUGLuckyBDModel

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSString *cycleId;
@property (copy, nonatomic) NSString *data;
@property (nonatomic) long long versionId;
@property (retain, nonatomic) NSNumber *bk;
@property (nonatomic) BOOL isDisable;

+ (id)modelCustomPropertyMapper;

- (void)copyResourceItemDataFrom:(id)a0;
- (void).cxx_destruct;

@end

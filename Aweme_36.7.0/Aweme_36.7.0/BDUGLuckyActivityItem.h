@class NSString, NSNumber;

@interface BDUGLuckyActivityItem : BDUGLuckyJSONModel

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSString *data;
@property (nonatomic) long long versionId;
@property (retain, nonatomic) NSNumber *bk;
@property (copy, nonatomic) NSString *entryId;
@property (copy, nonatomic) NSString *cycleId;

- (void).cxx_destruct;

@end

@class NSString, NSArray, NSNumber;

@interface AWELocalFollowListSelectOption : NSObject

@property (copy, nonatomic) NSString *lastUid;
@property (copy, nonatomic) NSArray *excludeUids;
@property (copy, nonatomic) NSArray *excludeSecUids;
@property (nonatomic) BOOL needFollowStatusDescending;
@property (nonatomic) BOOL needUidAscending;
@property (nonatomic) BOOL needMutualFollowTimeDescending;
@property (nonatomic) BOOL needWholeData;
@property (retain, nonatomic) NSNumber *limit;
@property (retain, nonatomic) NSNumber *offset;
@property (nonatomic) BOOL enableFilterErrorData;
@property (retain, nonatomic) NSNumber *lastMutualApproveTimeStampSecond;

- (void).cxx_destruct;

@end

@class NSString, NSNumber;

@interface AWEVideoDraftMissionInfoModel : NSObject <NSCoding>

@property (copy, nonatomic) NSString *missionFrom;
@property (copy, nonatomic) NSString *missionID;
@property (copy, nonatomic) NSString *missionType;
@property (copy, nonatomic) NSString *missionName;
@property (retain, nonatomic) NSNumber *isAssignmentMission;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

@class NSString;

@interface AFDNewSchoolStoryContainerTrackInfo : NSObject

@property (copy, nonatomic) NSString *firstEnterFrom;
@property (nonatomic) double pageEnterTimestamp;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *detailSchoolID;
@property (copy, nonatomic) NSString *detailSchoolName;
@property (copy, nonatomic) NSString *detailSchoolDefaultName;
@property (copy, nonatomic) NSString *enterMethod;

- (id)detailSchoolInfo;
- (unsigned long long)bottomButtonType;
- (id)basicTrackInfo;
- (void).cxx_destruct;

@end

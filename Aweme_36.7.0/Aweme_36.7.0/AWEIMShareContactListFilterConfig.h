@class NSString, NSArray, NSNumber;

@interface AWEIMShareContactListFilterConfig : NSObject

@property (copy, nonatomic) NSString *taskType;
@property (nonatomic) BOOL forbidPublicGroup;
@property (copy, nonatomic) NSArray *allowGroupTypes;
@property (retain, nonatomic) NSNumber *maxGroupMemberCount;
@property (retain, nonatomic) NSNumber *minGroupMemberCount;
@property (copy, nonatomic) NSString *guideTitle;
@property (copy, nonatomic) NSString *guideSubtitle;
@property (copy, nonatomic) NSString *guideIconUrlString;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end

@class NSNumber, NSString, NSArray;

@interface AWELiveRedDotExtraModel : NSObject

@property (copy, nonatomic) NSNumber *ackType;
@property (copy, nonatomic) NSNumber *tabLiveSubID;
@property (copy, nonatomic) NSString *tabLiveSubName;
@property (copy, nonatomic) NSString *tabLiveSubEvent;
@property (copy, nonatomic) NSString *roomSchema;
@property (copy, nonatomic) NSString *followRelation;
@property (copy, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSNumber *anchorUserId;
@property (retain, nonatomic) NSArray *interposeRoomIdList;
@property (copy, nonatomic) NSNumber *insertType;

+ (id)modelWithJsonString:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end

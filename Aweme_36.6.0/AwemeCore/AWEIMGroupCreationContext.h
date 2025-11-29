@class NSSet, NSMutableDictionary, NSString, NSDictionary, NSNumber;

@interface AWEIMGroupCreationContext : NSObject

@property (readonly, nonatomic) NSMutableDictionary *mutableBizExtension;
@property (readonly, copy, nonatomic) NSSet *otherParticipants;
@property (readonly, nonatomic) NSNumber *createSource;
@property (readonly, nonatomic) NSNumber *groupCreateType;
@property (retain, nonatomic) NSNumber *groupType;
@property (nonatomic) unsigned long long conversationType;
@property (copy, nonatomic) NSString *idempotentIdentifier;
@property (copy, nonatomic) NSString *createGroupIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *bizExtension;
@property (copy, nonatomic) NSString *create;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *groupIcon;
@property (copy, nonatomic) NSString *groupDesc;
@property (copy, nonatomic) NSString *trackEnterFrom;
@property (copy, nonatomic) NSString *trackEnterMethod;
@property (nonatomic) BOOL isFromCreatGroupPanel;
@property (copy, nonatomic) NSString *createPage;
@property (copy, nonatomic) NSString *sendPublicNoticeCard;

+ (id)contextWithOtherParticipants:(id)a0 createSource:(id)a1 groupType:(id)a2;
+ (id)contextWithOtherParticipants:(id)a0 createSource:(id)a1 groupCreateType:(id)a2;

- (void)updateBizExtension:(id)a0;
- (id)initWithOtherParticipants:(id)a0 createSource:(id)a1 groupCreateType:(id)a2;
- (void).cxx_destruct;

@end

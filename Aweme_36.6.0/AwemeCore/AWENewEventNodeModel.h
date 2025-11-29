@class NSString;

@interface AWENewEventNodeModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *coverURLString;
@property (copy, nonatomic) NSString *itemIDString;
@property (copy, nonatomic) NSString *eventID;
@property (copy, nonatomic) NSString *eventDesc;
@property (copy, nonatomic) NSString *eventTimestamp;
@property (copy, nonatomic) NSString *eventLabel;
@property (copy, nonatomic) NSString *hotspotWord;
@property (nonatomic) long long nodeType;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

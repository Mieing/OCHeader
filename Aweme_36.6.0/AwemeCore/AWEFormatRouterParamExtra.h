@class NSDictionary, NSString;

@interface AWEFormatRouterParamExtra : JSONModel

@property (copy, nonatomic) NSDictionary *chatExtraDict;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSDictionary *enterExtraDict;
@property (copy, nonatomic) NSString *sayhiData;
@property (copy, nonatomic) NSDictionary *sayhiDataDict;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *othersHomepagePreviousPage;
@property (copy, nonatomic) NSString *logExtra;
@property (nonatomic) long long formatId;
@property (nonatomic) long long imBotId;
@property (nonatomic) BOOL isLoginForFormatWillEnter;
@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *commentId;
@property (copy, nonatomic) NSString *itemFrom;
@property (copy, nonatomic) NSString *liveRoomId;
@property (copy, nonatomic) NSString *chatExtra;
@property (nonatomic) BOOL followLiveLife;
@property (copy, nonatomic) NSString *barTitle;
@property (copy, nonatomic) NSString *barContent;
@property (copy, nonatomic) NSString *enterExtra;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end

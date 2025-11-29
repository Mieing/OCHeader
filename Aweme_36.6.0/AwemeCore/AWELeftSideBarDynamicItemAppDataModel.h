@class NSArray, NSString;

@interface AWELeftSideBarDynamicItemAppDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *notSeenItemIdListV2;
@property (nonatomic) BOOL redPoint;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appIconURL;
@property (copy, nonatomic) NSString *appSchema;
@property (copy, nonatomic) NSString *bubbleMsg;
@property (copy, nonatomic) NSString *microAppExtra;
@property (copy, nonatomic) NSString *recommendReason;
@property (nonatomic) BOOL isCreatedByClient;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)aweAppPresenterAction_key;
- (void).cxx_destruct;

@end

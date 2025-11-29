@class NSString, NSDictionary;

@interface BDPCDDynamicCardCustomActionItemModel : NSObject

@property (nonatomic) long long customActionType;
@property (copy, nonatomic) NSString *customActionTypeStr;
@property (copy, nonatomic) NSDictionary *optionsDict;

+ (id)stringToActionTypeDict;
+ (id)supportCustomActionType;

- (id)initWithActionTypeStr:(id)a0 optionsDict:(id)a1;
- (void).cxx_destruct;

@end

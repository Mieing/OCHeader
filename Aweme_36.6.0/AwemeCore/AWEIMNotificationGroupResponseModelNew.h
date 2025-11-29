@class NSDictionary, NSMutableArray;

@interface AWEIMNotificationGroupResponseModelNew : IESIMBaseApiModel

@property (retain, nonatomic) NSMutableArray *noticeGroupArray;
@property (retain, nonatomic) NSDictionary *extra;
@property (nonatomic) BOOL shouldGuideDismiss;

+ (id)noticeGroupArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

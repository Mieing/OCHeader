@class NSNumber, NSArray;

@interface BizNotificationTabInfo : NSObject

@property (retain, nonatomic) NSNumber *notifyMsgVersion;
@property (copy, nonatomic) NSArray *tabList;

+ (id)makeWithNotifyMsgVersion:(id)a0 tabList:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end

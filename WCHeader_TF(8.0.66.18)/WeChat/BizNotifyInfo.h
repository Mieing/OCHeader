@class NSArray, NSString, MassSendCardMsg, NSNumber;

@interface BizNotifyInfo : NSObject

@property (retain, nonatomic) NSNumber *eventType;
@property (retain, nonatomic) MassSendCardMsg *msgInfo;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *talker;

+ (id)makeWithEventType:(id)a0 msgInfo:(id)a1 items:(id)a2 talker:(id)a3;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end

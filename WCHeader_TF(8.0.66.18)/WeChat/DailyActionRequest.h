@class NSString, DailyPlatformProto;

@interface DailyActionRequest : NSObject

@property (copy, nonatomic) NSString *commandId;
@property (retain, nonatomic) DailyPlatformProto *proto;

+ (id)makeWithCommandId:(id)a0 proto:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end

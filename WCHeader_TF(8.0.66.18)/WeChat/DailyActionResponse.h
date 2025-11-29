@class NSString, NSNumber, DailyPlatformProto;

@interface DailyActionResponse : NSObject

@property (copy, nonatomic) NSString *commandId;
@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) DailyPlatformProto *proto;

+ (id)makeWithCommandId:(id)a0 errorCode:(id)a1 errorMessage:(id)a2 proto:(id)a3;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end

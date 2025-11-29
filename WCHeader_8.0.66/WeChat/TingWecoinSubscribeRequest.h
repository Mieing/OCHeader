@class NSString, FlutterStandardTypedData, NSNumber;

@interface TingWecoinSubscribeRequest : NSObject

@property (retain, nonatomic) FlutterStandardTypedData *joinInfo;
@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSNumber *tingScene;

+ (id)makeWithJoinInfo:(id)a0 sessionId:(id)a1 tingScene:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end

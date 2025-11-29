@class NSNumber, NSString;

@interface EcsNativeRouterResponse : NSObject

@property (retain, nonatomic) NSNumber *errCode;
@property (copy, nonatomic) NSString *errMsg;
@property (copy, nonatomic) NSString *data;

+ (id)makeWithErrCode:(id)a0 errMsg:(id)a1 data:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end

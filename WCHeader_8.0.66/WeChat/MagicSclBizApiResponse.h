@class NSString, FlutterStandardTypedData;

@interface MagicSclBizApiResponse : NSObject

@property (nonatomic) long long errCode;
@property (copy, nonatomic) NSString *errMsg;
@property (retain, nonatomic) FlutterStandardTypedData *data;

+ (id)makeWithErrCode:(long long)a0 errMsg:(id)a1 data:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end

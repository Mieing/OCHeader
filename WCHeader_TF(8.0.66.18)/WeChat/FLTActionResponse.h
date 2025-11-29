@class NSString, FLTPlatformProto;

@interface FLTActionResponse : NSObject

@property (copy, nonatomic) NSString *cmdId;
@property (nonatomic) long long errCode;
@property (copy, nonatomic) NSString *errMsg;
@property (retain, nonatomic) FLTPlatformProto *proto;

+ (id)makeWithCmdId:(id)a0 errCode:(long long)a1 errMsg:(id)a2 proto:(id)a3;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end

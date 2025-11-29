@class NSString, FLTPlatformProto;

@interface FLTActionRequest : NSObject

@property (copy, nonatomic) NSString *cmdId;
@property (retain, nonatomic) FLTPlatformProto *proto;

+ (id)makeWithCmdId:(id)a0 proto:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end

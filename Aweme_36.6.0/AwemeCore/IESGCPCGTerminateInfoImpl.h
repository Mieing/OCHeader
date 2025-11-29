@class NSString, NSDictionary;

@interface IESGCPCGTerminateInfoImpl : NSObject <IESGCPCGTerminateInfo>

@property (nonatomic) long long fromStage;
@property (nonatomic) long long method;
@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSDictionary *info;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoWithMethod:(long long)a0 fromStage:(long long)a1 code:(long long)a2 message:(id)a3 info:(id)a4;

- (void).cxx_destruct;

@end

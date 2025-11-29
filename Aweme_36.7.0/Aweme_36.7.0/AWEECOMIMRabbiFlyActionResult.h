@class NSString, NSDictionary;

@interface AWEECOMIMRabbiFlyActionResult : NSObject <BDECRabbiFlyIActionResult>

@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSDictionary *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)successActionResult;
+ (id)notRegisteredActionResult;
+ (id)paramErrorActionResult;

- (id)initWithCode:(long long)a0 msg:(id)a1 data:(id)a2;
- (void).cxx_destruct;

@end

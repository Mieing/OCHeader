@class NSString;

@interface AWEPzRegisterVerifyResultModel : NSObject <AWEPzRegisterVerifyResultProtocol>

@property (nonatomic) long long result;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateWithResult:(long long)a0;


@end

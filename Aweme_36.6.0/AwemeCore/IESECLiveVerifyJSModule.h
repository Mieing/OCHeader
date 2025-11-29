@class BTDWeakProxy;

@interface IESECLiveVerifyJSModule : IESECParamsVerifyJSModule

@property (retain, nonatomic) BTDWeakProxy *liveContextProxy;

+ (id)methodLookup;
+ (id)name;

- (id)initWithParam:(id)a0;
- (id)getECActionData;
- (void).cxx_destruct;

@end

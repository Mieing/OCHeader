@class NSString, NSDictionary;

@interface BDTuringTwiceVerifyModel : BDTuringVerifyModel <BDTuringVerifyModelCreator, BDTuringParameterModel>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *mfa_decision;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithParameter:(id)a0;
+ (BOOL)canHandleParameter:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end

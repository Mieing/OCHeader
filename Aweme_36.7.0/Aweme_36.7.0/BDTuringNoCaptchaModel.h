@class NSString;

@interface BDTuringNoCaptchaModel : BDTuringVerifyModel <BDTuringVerifyModelCreator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithParameter:(id)a0;
+ (BOOL)canHandleParameter:(id)a0;

- (id)init;

@end

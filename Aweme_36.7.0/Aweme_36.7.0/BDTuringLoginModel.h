@class NSString;

@interface BDTuringLoginModel : BDTuringVerifyModel <BDTuringVerifyModelCreator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) NSString *toast;

+ (id)modelWithParameter:(id)a0;
+ (BOOL)canHandleParameter:(id)a0;

- (void).cxx_destruct;

@end

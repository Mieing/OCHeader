@class NSString;

@interface BDSCClarityLimitConfig : NSObject <BDModelCustom>

@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSString *recommendSolutionTitle;
@property (copy, nonatomic) NSString *otherSolutionTitle;
@property (copy, nonatomic) NSString *recommendTagText;
@property (copy, nonatomic) NSString *clarityTagText;
@property (copy, nonatomic) NSString *otherDegradeToast;
@property (nonatomic) long long height;
@property (nonatomic) long long width;
@property (nonatomic) long long size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelPropertyBlacklist;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

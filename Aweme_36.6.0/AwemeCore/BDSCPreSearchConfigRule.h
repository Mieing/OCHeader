@class NSString;

@interface BDSCPreSearchConfigRule : NSObject <BDModelCustom>

@property (nonatomic) long long day;
@property (nonatomic) long long startSearchCount;
@property (nonatomic) long long playCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;


@end

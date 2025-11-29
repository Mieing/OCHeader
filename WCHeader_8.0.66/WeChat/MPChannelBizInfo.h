@class NSString;

@interface MPChannelBizInfo : NSObject <PBCoding>

@property (copy, nonatomic) NSString *bizHeadImgUrl;
@property (copy, nonatomic) NSString *bizUsrName;
@property (nonatomic) unsigned int bizUin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_bizHeadImgUrl;
+ (void)PBArrayAdd_bizUin;
+ (void)PBArrayAdd_bizUsrName;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end

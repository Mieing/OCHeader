@class NSString;

@interface AWEFansListMixFansCountModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long toutiaoFansCount;
@property (nonatomic) long long douyinFansCount;
@property (nonatomic) long long hotsoonFansCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end

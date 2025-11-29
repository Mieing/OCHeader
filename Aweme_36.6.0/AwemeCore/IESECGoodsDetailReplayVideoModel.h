@class NSString;

@interface IESECGoodsDetailReplayVideoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *cover;
@property (copy, nonatomic) NSString *playUrl;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long duration;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

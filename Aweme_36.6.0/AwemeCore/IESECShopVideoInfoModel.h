@class NSString;

@interface IESECShopVideoInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *videoId;
@property (retain, nonatomic) NSString *playUrl;
@property (nonatomic) double duration;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) long long fragmentId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

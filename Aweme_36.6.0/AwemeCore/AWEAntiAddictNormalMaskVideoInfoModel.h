@class NSString, NSNumber;

@interface AWEAntiAddictNormalMaskVideoInfoModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *aid;
@property (readonly, copy, nonatomic) NSNumber *type;
@property (readonly, copy, nonatomic) NSNumber *loopTime;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

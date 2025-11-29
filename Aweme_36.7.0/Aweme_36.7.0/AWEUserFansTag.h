@class NSString, AWEURLModel;

@interface AWEUserFansTag : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) AWEURLModel *icon;
@property (copy, nonatomic) NSString *labelTrack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

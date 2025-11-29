@class NSString, AWEURLModel;

@interface AWEAwemeOriginalAudioModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *playURL;
@property (copy, nonatomic) NSString *vID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

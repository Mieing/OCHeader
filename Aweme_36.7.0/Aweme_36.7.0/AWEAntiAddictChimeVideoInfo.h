@class NSString, AWEAwemeModel;

@interface AWEAntiAddictChimeVideoInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEAwemeModel *chimeVideo;
@property (nonatomic) long long chimePlayTime;
@property (nonatomic) long long resultCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)chimeVideoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

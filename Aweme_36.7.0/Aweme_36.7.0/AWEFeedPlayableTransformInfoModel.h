@class NSString, AWEFeedPlayableButtonInfoModel;

@interface AWEFeedPlayableTransformInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEFeedPlayableButtonInfoModel *download;
@property (retain, nonatomic) AWEFeedPlayableButtonInfoModel *replay;
@property (retain, nonatomic) AWEFeedPlayableButtonInfoModel *landPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

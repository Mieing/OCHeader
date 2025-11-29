@class NSString, NSArray;

@interface AWEAutoCaptionStickerInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long locationType;
@property (copy, nonatomic) NSString *audioUri;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSArray *captions;
@property (copy, nonatomic) NSArray *captionInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)captionsJSONTransformer;
+ (id)captionInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

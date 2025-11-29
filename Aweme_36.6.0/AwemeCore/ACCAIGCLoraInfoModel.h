@class NSArray, NSString;

@interface ACCAIGCLoraInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *originalImages;
@property (retain, nonatomic) NSArray *generatedImages;
@property (retain, nonatomic) NSArray *thumbGeneratedImages;
@property (retain, nonatomic) NSArray *waterMarkImages;
@property (nonatomic) long long waitingMinutes;
@property (copy, nonatomic) NSString *waitTimeTip;
@property (nonatomic) long long taskStatus;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *stickerId;
@property (copy, nonatomic) NSString *effectExtra;
@property (copy, nonatomic) NSString *loraId;
@property (nonatomic) unsigned long long enterComponentType;
@property (nonatomic) BOOL isAIImageToLive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)originalImagesJSONTransformer;
+ (id)generatedImagesJSONTransformer;
+ (id)thumbGeneratedImagesJSONTransformer;
+ (id)waterMarkImagesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

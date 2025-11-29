@class NSString, NSArray, NSNumber, AWEURLModel;

@interface AWECommerceLiveComponentModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *liveItemId;
@property (nonatomic) long long liveType;
@property (retain, nonatomic) AWEURLModel *enterURL;
@property (copy, nonatomic) NSString *lotteryURL;
@property (retain, nonatomic) NSNumber *lotteryDrawTime;
@property (retain, nonatomic) NSNumber *currentTime;
@property (nonatomic) long long actionType;
@property (copy, nonatomic) NSArray *drawPhotos;
@property (copy, nonatomic) NSString *comment;
@property (retain, nonatomic) NSNumber *retryCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)enterURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

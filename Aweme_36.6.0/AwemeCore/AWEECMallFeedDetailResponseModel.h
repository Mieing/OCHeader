@class NSArray, NSString, AWEECMallFeedPageModel;

@interface AWEECMallFeedDetailResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *feed;
@property (retain, nonatomic) AWEECMallFeedPageModel *page;
@property (retain, nonatomic) NSString *requestId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)feedJSONTransformer;
+ (id)pageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

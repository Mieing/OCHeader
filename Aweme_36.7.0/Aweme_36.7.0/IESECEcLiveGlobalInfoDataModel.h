@class NSString, NSDictionary;

@interface IESECEcLiveGlobalInfoDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *authorId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *secAuthorId;
@property (nonatomic) BOOL isFollowed;
@property (copy, nonatomic) NSString *ecomLiveParams;
@property (copy, nonatomic) NSString *ecomSceneId;
@property (copy, nonatomic) NSString *liveListChannel;
@property (copy, nonatomic) NSDictionary *reportParams;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

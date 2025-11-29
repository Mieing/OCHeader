@class NSArray, NSString;

@interface IESThirdPartyResponseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *stickerList;
@property (readonly, copy, nonatomic) NSString *searchTips;
@property (readonly, nonatomic) IESThirdPartyResponseModel *gifsResponseModel;
@property (readonly, copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *requestID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stickerListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)appendAndUpdateDataWithResponseModel:(id)a0;
- (void).cxx_destruct;

@end

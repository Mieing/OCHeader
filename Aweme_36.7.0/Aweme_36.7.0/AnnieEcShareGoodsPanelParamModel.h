@class NSString, NSNumber, NSArray;

@interface AnnieEcShareGoodsPanelParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *sourcePage;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *promotionId;
@property (copy, nonatomic) NSString *shareActionType;
@property (copy, nonatomic) NSString *promotionSource;
@property (retain, nonatomic) NSNumber *channelType;
@property (copy, nonatomic) NSString *channelId;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *carrierSource;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *metaParams;
@property (copy, nonatomic) NSString *buttonLocation;
@property (copy, nonatomic) NSString *authorId;
@property (copy, nonatomic) NSString *secAuthorId;
@property (copy, nonatomic) NSString *shareExtraInfo;
@property (copy, nonatomic) NSString *goodsImage;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *requestPage;
@property (copy, nonatomic) NSArray *channelList;
@property (copy, nonatomic) NSArray *actionList;
@property (copy, nonatomic) NSString *bcmChain;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

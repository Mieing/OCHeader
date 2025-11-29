@class IESECWinFeedVideoModel, IESECWinFeedProductModel, NSString;

@interface IESECWinFeedMixItem : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long itemType;
@property (retain, nonatomic) IESECWinFeedProductModel *feedProduct;
@property (retain, nonatomic) IESECWinFeedVideoModel *feedVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSNumber, NSString, IESLiveAddAnchorContentModel;

@interface IESLiveAddAnchorResultModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSString *anchorTitle;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *anchorIcon;
@property (retain, nonatomic) IESLiveAddAnchorContentModel *content;
@property (retain, nonatomic) id data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

@class IESECLinkConfig, IESECRadiusConfig, IESECBackgroundDescribeInfo, IESECImageModel, IESECHeadVideoModel, IESECBorderConfig;

@interface IESECMediaBoxElement : IESECBasicElement

@property (retain, nonatomic) IESECLinkConfig *link;
@property (retain, nonatomic) IESECRadiusConfig *radius;
@property (retain, nonatomic) IESECBorderConfig *border;
@property (retain, nonatomic) IESECBorderConfig *selectInBorder;
@property (retain, nonatomic) IESECBorderConfig *defaultInBorder;
@property (retain, nonatomic) IESECBackgroundDescribeInfo *background;
@property (retain, nonatomic) IESECHeadVideoModel *videoModel;
@property (retain, nonatomic) IESECImageModel *image;
@property (retain, nonatomic) IESECImageModel *thumbnail;
@property (nonatomic) BOOL usePlaceholder;
@property (nonatomic) unsigned long long mediaType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

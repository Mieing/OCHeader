@class IESECFeedResourceCardHeaderLinkInfoModel, IESECFeedResourceCardHeaderTitleInfoModel;

@interface IESECFeedResourceCardHeaderModel : IESECFeedResourceCardBaseNode

@property (nonatomic) long long headerHeight;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) IESECFeedResourceCardHeaderTitleInfoModel *title;
@property (retain, nonatomic) IESECFeedResourceCardHeaderTitleInfoModel *subtitle;
@property (retain, nonatomic) IESECFeedResourceCardHeaderLinkInfoModel *link;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

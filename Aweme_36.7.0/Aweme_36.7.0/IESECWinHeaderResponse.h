@class IESECWinHeaderBFFModel, IESECWinMixFullItem;

@interface IESECWinHeaderResponse : IESECBaseApiModel

@property (retain, nonatomic) IESECWinMixFullItem *inventories;
@property (retain, nonatomic) IESECWinHeaderBFFModel *headerBFFModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

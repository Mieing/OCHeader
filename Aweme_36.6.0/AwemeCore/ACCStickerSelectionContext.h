@class IESThirdPartyStickerModel, NSString, IESEffectModel, NSNumber;

@interface ACCStickerSelectionContext : NSObject

@property (retain, nonatomic) IESEffectModel *stickerModel;
@property (retain, nonatomic) IESThirdPartyStickerModel *thirdPartyModel;
@property (nonatomic) long long stickerType;
@property (retain, nonatomic) NSString *tabName;
@property (retain, nonatomic) NSNumber *willReplacedStickerId;

- (void).cxx_destruct;

@end

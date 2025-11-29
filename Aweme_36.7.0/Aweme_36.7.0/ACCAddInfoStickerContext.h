@class IESThirdPartyStickerModel, NSString, ACCURS, UIView, IESEffectModel, NSNumber, IESInfoStickerProps;

@interface ACCAddInfoStickerContext : NSObject

@property (nonatomic) long long stickerID;
@property (copy, nonatomic) NSString *tabName;
@property (retain, nonatomic) IESEffectModel *stickerModel;
@property (retain, nonatomic) IESThirdPartyStickerModel *thirdPartyModel;
@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) ACCURS *URS;
@property (retain, nonatomic) NSNumber *targetMaxEdgeNumber;
@property (nonatomic) unsigned long long source;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) unsigned long long fromXiangSuType;
@property (retain, nonatomic) IESInfoStickerProps *props;
@property (weak, nonatomic) UIView *stickerView;

- (void)processURSWithRepository:(id)a0 onCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end

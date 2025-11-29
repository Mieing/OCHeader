@class UIView, NSString, NSArray, UITapGestureRecognizer, NSDictionary, IESECWinLynxCardResponse, IESECLynxCardModel, IESECLynxCard;
@protocol IESECWinListKitNativeCellLynxCardDelegate;

@interface IESECWinListKitNativeCell : UICollectionViewCell <IESECWinListKitNativeCellProtocol> {
    UITapGestureRecognizer *_cellTapGesutre;
}

@property (nonatomic) double lastLynxCardHeight;
@property (nonatomic) double lastLynxCardWidth;
@property (retain, nonatomic) IESECLynxCard *lynxCard;
@property (retain, nonatomic) IESECLynxCardModel *lynxCardModel;
@property (readonly, nonatomic) UIView *nativeContentView;
@property (nonatomic) double nativeContentHeight;
@property (copy, nonatomic) id /* block */ nativeCellClick;
@property (nonatomic) double lynxCardMarginTop;
@property (copy, nonatomic) NSString *currentEnvIdentifier;
@property (copy, nonatomic) NSDictionary *globalPropsExtra;
@property (copy, nonatomic) NSDictionary *rootGlobalPropsExtra;
@property (copy, nonatomic) NSArray *bridges;
@property (weak, nonatomic) id<IESECWinListKitNativeCellLynxCardDelegate> lynxCardDelegate;
@property (readonly, nonatomic) IESECWinLynxCardResponse *lynxCardResp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)lynxCard:(id)a0 sizeDidChanged:(struct CGSize { double x0; double x1; })a1;
- (void)lynxCard:(id)a0 didLoadFail:(id)a1;
- (void)currentCardsWriteAlogMethodName:(id)a0 paramModel:(id)a1 result:(id)a2 context:(id)a3;
- (id)currentListContextIdForCards;
- (void)updateWithLynxCardResp:(id)a0;
- (void)updateListLayoutWithLynxCard:(id)a0;
- (void)nativeCellDidClick;
- (void)removeLynxCard:(id)a0;
- (id)configLynxData:(id)a0;
- (void)updateLynxCardHeight:(id)a0;
- (void).cxx_destruct;

@end

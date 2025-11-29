@class NSString, IESECGoodsDetailParameters, UILabel, IESECButton, IESECUIImageView;

@interface IESECGoodsDetailGuessQueryEntryView : UIView <IESECGoodsDetailParametersProtocol>

@property (retain, nonatomic) IESECUIImageView *searchImageView;
@property (retain, nonatomic) UILabel *guessQueryLabel;
@property (retain, nonatomic) IESECButton *queryWordButton;
@property (retain, nonatomic) IESECGoodsDetailParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

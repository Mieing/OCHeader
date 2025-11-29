@class IESECShopTextComponentModel, NSString, IESECShopFont, UILabel;

@interface IESECShopTextComponent : UIView <IESECShopComponentProtocol> {
    IESECShopTextComponentModel *_model;
    double _percent;
    IESECShopFont *_fontContext;
}

@property (retain, nonatomic) UILabel *textLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateColorWithPercent:(double)a0;
- (id)initWithModel:(id)a0 fontScaleRatio:(double)a1;
- (double)textComponentWidth:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setupViews;
- (void)updateWithModel:(id)a0;

@end

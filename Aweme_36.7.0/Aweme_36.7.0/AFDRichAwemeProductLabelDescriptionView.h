@class AWESpecialRichAwemeProductCommentImageInfoModel, UIImageView, NSString, UIView, UILabel;

@interface AFDRichAwemeProductLabelDescriptionView : UIView <AFDRichAwemeProductLabelDescriptionViewProtocol>

@property (retain, nonatomic) AWESpecialRichAwemeProductCommentImageInfoModel *productCommentImageInfoModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *productNameLabel;
@property (retain, nonatomic) UIView *partingLine;
@property (retain, nonatomic) UILabel *productAttitudeLabel;
@property (retain, nonatomic) UIImageView *attitudeIconImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateView:(id)a0;
- (void).cxx_destruct;

@end

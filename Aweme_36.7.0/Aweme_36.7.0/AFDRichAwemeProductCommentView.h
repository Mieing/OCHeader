@class AWESpecialRichAwemeProductCommentImageInfoModel, UIImageView, NSString, UILabel;

@interface AFDRichAwemeProductCommentView : UIView <AFDRichAwemeProductCommentViewProtocol>

@property (retain, nonatomic) AWESpecialRichAwemeProductCommentImageInfoModel *productCommentImageInfoModel;
@property (retain, nonatomic) UIImageView *attitudeIconImageView;
@property (retain, nonatomic) UILabel *productInfoLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateView:(id)a0;
- (void).cxx_destruct;

@end

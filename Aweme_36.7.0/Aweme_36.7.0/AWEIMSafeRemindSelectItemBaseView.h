@class UIImageView, UILabel, NSString;

@interface AWEIMSafeRemindSelectItemBaseView : UIView <AWEIMRendererProtocol>

@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UILabel *actionTipLabel;
@property (nonatomic) BOOL selectState;
@property (retain, nonatomic) id model;
@property (retain, nonatomic) id context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

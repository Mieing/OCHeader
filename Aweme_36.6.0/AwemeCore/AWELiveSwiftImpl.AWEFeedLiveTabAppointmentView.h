@class UIImageView, CAShapeLayer, UILabel, UIView;

@interface AWELiveSwiftImpl.AWEFeedLiveTabAppointmentView : UIView {
    void /* function */ appointmentClicked;
    void /* unknown type, empty encoding */ appointmentData;
    void /* unknown type, empty encoding */ $__lazy_storage_$_firstAvatar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_secondAvatar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_liveTag;
    void /* unknown type, empty encoding */ $__lazy_storage_$_liveTabImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_firstLiveMarkView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_secondLiveMarkView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_secondAvatarMaskLayer;
}

@property (nonatomic, copy) id /* block */ appointmentClicked;
@property (nonatomic, retain) UIImageView *firstAvatar;
@property (nonatomic, retain) UIImageView *secondAvatar;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UILabel *liveTag;
@property (nonatomic, retain) UIImageView *liveTabImageView;
@property (nonatomic, retain) UIView *firstLiveMarkView;
@property (nonatomic, retain) UIView *secondLiveMarkView;
@property (nonatomic, retain) CAShapeLayer *secondAvatarMaskLayer;

- (void)clickAppointment;
- (void)updateWithAppointmentDataWithAppointmentData:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end

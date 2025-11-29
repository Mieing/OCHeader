@class NSString, UIImageView, UIVisualEffectView, UIView, UILabel, ACCCameraPositionTagsLabel;
@protocol ACCEditTagsCameraPositionTableViewCellDelegate;

@interface ACCEditTagsCameraPositionTableViewCell : UITableViewCell <ACCTagsItemPickerTableViewCellProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIVisualEffectView *rightBottomCornerView;
@property (retain, nonatomic) UIImageView *navIconView;
@property (retain, nonatomic) UIView *titleContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *tagsContainer;
@property (retain, nonatomic) ACCCameraPositionTagsLabel *specialCameraPositionTag;
@property (retain, nonatomic) ACCCameraPositionTagsLabel *favoriteCountTag;
@property (retain, nonatomic) UIView *locationContainer;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) UILabel *detailLocationLabel;
@property (retain, nonatomic) UIView *separatorView;
@property (weak, nonatomic) id<ACCEditTagsCameraPositionTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleTapOnCover;
- (id)distanceDescFromLocationModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateWithData:(id)a0;

@end

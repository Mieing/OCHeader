@class NSString, UIImageView, AWEAnchorNormalInfoModel, UILabel;

@interface AWESearchPoiStrongStyleView : UIView <AWESearchTagViewUIInfoProtocol>

@property (nonatomic) BOOL isQuality;
@property (retain, nonatomic) AWEAnchorNormalInfoModel *anchorModel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *hasTailLabel;
@property (nonatomic) long long hasTailLableWidth;
@property (nonatomic) long long hasTailLableLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

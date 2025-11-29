@class NSString, UIImage;

@interface BDPActionSheetHeaderModel : NSObject

@property (nonatomic) double maxScale;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIImage *titleIconImage;
@property (nonatomic) unsigned long long enlargeType;
@property (nonatomic) long long type;
@property (nonatomic) double topPadding;
@property (nonatomic) double bottomPadding;

- (void)setupHorizontalConstraints;
- (id)initWithTitle:(id)a0 andSubtitle:(id)a1;
- (void).cxx_destruct;

@end

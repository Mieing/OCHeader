@class NSString, UIView;

@interface BDPDirectionDetailModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *distance;
@property (copy, nonatomic) NSString *address;
@property (weak, nonatomic) UIView *anchorView;
@property (nonatomic) BOOL showNavi;

- (void).cxx_destruct;

@end

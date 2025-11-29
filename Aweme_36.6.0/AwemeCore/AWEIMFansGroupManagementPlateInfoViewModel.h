@class NSString;

@interface AWEIMFansGroupManagementPlateInfoViewModel : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *plateHeaderViewTitle;
@property (copy, nonatomic) NSString *plateHeaderButtonTitle;
@property (copy, nonatomic) NSString *plateHeaderImageName;
@property (nonatomic) BOOL hasDotView;
@property (copy, nonatomic) NSString *plateFooterButtonTitle;

- (void)updateHeaderRightButtonWithModel:(id)a0;
- (double)viewFooterHeight;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (double)viewHeaderHeight;

@end

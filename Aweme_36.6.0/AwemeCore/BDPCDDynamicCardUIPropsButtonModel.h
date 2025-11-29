@class NSArray;

@interface BDPCDDynamicCardUIPropsButtonModel : BDPCDDynamicCardUIPropsBaseButtonModel

@property (nonatomic) long long buttonType;
@property (nonatomic) double minWidth;
@property (copy, nonatomic) NSArray *margin;
@property (copy, nonatomic) NSArray *padding;

- (id)initWithUIElementModel:(id)a0;
- (void)setupOtherPropertiesWithWithDict:(id)a0;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end

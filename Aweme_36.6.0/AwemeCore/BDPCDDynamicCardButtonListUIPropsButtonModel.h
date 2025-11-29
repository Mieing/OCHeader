@class NSString, NSArray, BDPCDDynamicCardCustomActionModel;

@interface BDPCDDynamicCardButtonListUIPropsButtonModel : BDPCDDynamicCardUIPropsModel

@property (nonatomic) BOOL disabled;
@property (nonatomic) long long buttonType;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) BDPCDDynamicCardCustomActionModel *onClick;
@property (copy, nonatomic) NSArray *padding;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end

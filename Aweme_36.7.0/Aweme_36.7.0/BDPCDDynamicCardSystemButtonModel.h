@class NSString, BDPCDDynamicCardCustomActionModel;

@interface BDPCDDynamicCardSystemButtonModel : BDPCDDynamicCardUIPropsModel

@property (nonatomic) BOOL visible;
@property (nonatomic) BOOL disabled;
@property (copy, nonatomic) NSString *buttonText;
@property (retain, nonatomic) BDPCDDynamicCardCustomActionModel *onClick;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end

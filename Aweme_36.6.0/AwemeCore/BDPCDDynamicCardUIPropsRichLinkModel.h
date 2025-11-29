@class NSString, BDPCDDynamicCardCustomActionModel;

@interface BDPCDDynamicCardUIPropsRichLinkModel : BDPCDDynamicCardUIPropsModel

@property (nonatomic) long long usage;
@property (copy, nonatomic) NSString *textContent;
@property (retain, nonatomic) BDPCDDynamicCardCustomActionModel *onClick;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end

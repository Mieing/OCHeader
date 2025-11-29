@class NSString;

@interface BDPCDDynamicCardUISystemHeaderContentModel : BDPCDDynamicCardUIPropsModel

@property (nonatomic) unsigned long long renderType;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *iconURLString;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end

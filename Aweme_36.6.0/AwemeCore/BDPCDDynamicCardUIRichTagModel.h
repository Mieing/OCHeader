@class NSString;

@interface BDPCDDynamicCardUIRichTagModel : BDPCDDynamicCardUIPropsModel

@property (copy, nonatomic) NSString *textContent;
@property (nonatomic) unsigned long long tagType;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end

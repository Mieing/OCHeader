@class NSString;

@interface BDPCDDynamicCardUIPropsRichTextModel : BDPCDDynamicCardUIPropsModel

@property (copy, nonatomic) NSString *textContent;
@property (nonatomic) long long textType;
@property (nonatomic) unsigned long long usage;
@property (nonatomic) long long fonSizeType;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end

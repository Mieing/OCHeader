@class NSString;

@interface AWEIMCodeGenSharePanelBtnModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *lightIconUrl;
@property (copy, nonatomic) NSString *darkIconUrl;
@property (copy, nonatomic) NSString *text;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithKey:(id)a0 text:(id)a1;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0;

@end

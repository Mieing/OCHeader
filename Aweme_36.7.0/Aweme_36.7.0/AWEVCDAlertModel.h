@class NSString, NSArray;

@interface AWEVCDAlertModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *barTitle;
@property (retain, nonatomic) NSString *barText;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSArray *agreementArray;

+ (id)barIconUrlJSONTransformer;
+ (id)agreementArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

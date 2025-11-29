@class AWEPaidStreamIAAAwardUIItem, AWEPaidStreamIAAAwardCloseTopModel;

@interface AWEPaidStreamIAAUIConfig : AWEBaseApiModel

@property (retain, nonatomic) AWEPaidStreamIAAAwardUIItem *detainmentUIItem;
@property (retain, nonatomic) AWEPaidStreamIAAAwardUIItem *rewatchUIItem;
@property (retain, nonatomic) AWEPaidStreamIAAAwardCloseTopModel *closeTopUIConfig;

+ (id)rewatchUIConfigJSONTransformer;
+ (id)detainmentUIConfigJSONTransformer;
+ (id)closeTopUIConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

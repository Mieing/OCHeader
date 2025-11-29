@class AWENearbyC2CellTextData, AWEURLModel;

@interface AWENearbyLifeDualAnchorItem : AWEBaseApiModel

@property (nonatomic) long long type;
@property (retain, nonatomic) AWENearbyC2CellTextData *textInfo;
@property (retain, nonatomic) AWEURLModel *imgInfo;
@property (nonatomic) double leftMargin;

+ (BOOL)automaticallyDefaultMapping;
+ (id)textInfoJSONTransformer;
+ (id)imgInfoJSONTransformer;

- (void).cxx_destruct;

@end

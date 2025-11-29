@class NSString, AWEURLModel;

@interface AWENearbyLifeDualRoomProductInfo : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *firstIcon;
@property (copy, nonatomic) NSString *firstTag;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long uiStyle;

+ (BOOL)automaticallyDefaultMapping;
+ (id)firstIconJSONTransformer;

- (void).cxx_destruct;

@end

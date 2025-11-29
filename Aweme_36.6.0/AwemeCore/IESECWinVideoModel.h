@class NSString, IESECURLModel, NSArray, NSNumber;

@interface IESECWinVideoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *cover;
@property (nonatomic) long long duration;
@property (retain, nonatomic) IESECURLModel *subIcon;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSString *jumpUrl;
@property (nonatomic) long long itemID;
@property (retain, nonatomic) NSNumber *videoID;
@property (retain, nonatomic) NSArray *products;
@property (retain, nonatomic) NSArray *productDescription;
@property (nonatomic) long long buyShareID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)productsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

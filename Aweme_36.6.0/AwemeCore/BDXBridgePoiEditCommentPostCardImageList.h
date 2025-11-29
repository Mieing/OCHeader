@class NSString, NSNumber, NSArray;

@interface BDXBridgePoiEditCommentPostCardImageList : BDXBridgeModel

@property (copy, nonatomic) NSString *id;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *base64;
@property (retain, nonatomic) NSNumber *textCnt;
@property (retain, nonatomic) NSNumber *tagCnt;
@property (retain, nonatomic) NSNumber *stickerCnt;
@property (nonatomic) BOOL isFiltered;
@property (nonatomic) BOOL isBeautified;
@property (nonatomic) BOOL isQualityEnhanced;
@property (retain, nonatomic) NSArray *stickerText;
@property (retain, nonatomic) NSArray *tagContent;
@property (nonatomic) long long contentSource;

+ (id)contentSourceJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

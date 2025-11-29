@class NSString, NSArray;

@interface AWEBigThumbModel : AWEBaseApiModel

@property (nonatomic) long long imgNum;
@property (copy, nonatomic) NSString *thumbUri;
@property (copy, nonatomic) NSString *imgUrl;
@property (nonatomic) long long imgXSize;
@property (nonatomic) long long imgYSize;
@property (nonatomic) long long imgXLen;
@property (nonatomic) long long imgYLen;
@property (nonatomic) double thumbduration;
@property (nonatomic) double thumbInterval;
@property (copy, nonatomic) NSString *thumbFext;
@property (copy, nonatomic) NSArray *uriList;
@property (copy, nonatomic) NSArray *imgUrlList;

+ (id)JSONKeyPathsByPropertyKey;

- (void)jsonMapForImgUrlsFromJSONDictionary:(id)a0;
- (void).cxx_destruct;

@end

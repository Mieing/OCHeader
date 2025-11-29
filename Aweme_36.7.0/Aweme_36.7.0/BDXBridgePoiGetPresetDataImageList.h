@class NSString, NSNumber, NSArray;

@interface BDXBridgePoiGetPresetDataImageList : BDXBridgeModel

@property (copy, nonatomic) NSString *id;
@property (retain, nonatomic) NSNumber *index;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *base64;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *contentSource;
@property (retain, nonatomic) NSNumber *textCnt;
@property (retain, nonatomic) NSNumber *tagCnt;
@property (retain, nonatomic) NSNumber *stickerCnt;
@property (nonatomic) BOOL isFiltered;
@property (nonatomic) BOOL isBeautified;
@property (nonatomic) BOOL isQualityEnhanced;
@property (copy, nonatomic) NSString *rawUri;
@property (retain, nonatomic) NSNumber *readyTime;
@property (retain, nonatomic) NSNumber *longitude;
@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSArray *stickerText;
@property (retain, nonatomic) NSArray *tagContent;
@property (retain, nonatomic) NSArray *customStickersUri;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

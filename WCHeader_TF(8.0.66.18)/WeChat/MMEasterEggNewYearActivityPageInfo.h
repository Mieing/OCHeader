@class NSString;

@interface MMEasterEggNewYearActivityPageInfo : NSObject

@property (nonatomic) unsigned long long canvasPageId;
@property (retain, nonatomic) NSString *canvasPageXML;
@property (retain, nonatomic) NSString *weAppUserName;
@property (retain, nonatomic) NSString *weAppPagePath;
@property (retain, nonatomic) NSString *h5URL;
@property (retain, nonatomic) NSString *couponAppId;
@property (retain, nonatomic) NSString *couponStockId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *finderFeedId;
@property (retain, nonatomic) NSString *finderNonceId;

- (id)initWithMaterialPageInfo:(id)a0;
- (BOOL)isValidWithPageType:(unsigned long long)a0;
- (void).cxx_destruct;

@end

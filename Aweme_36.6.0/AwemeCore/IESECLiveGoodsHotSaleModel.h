@class NSString, NSArray, NSNumber, NSMutableArray;

@interface IESECLiveGoodsHotSaleModel : MTLModel <MTLJSONSerializing, IESECLiveHotsaleItem>

@property (retain, nonatomic) NSString *saleNumStr;
@property (nonatomic) long long UIType;
@property (nonatomic) long long dataType;
@property (retain, nonatomic) NSString *imageURLStr;
@property (retain, nonatomic) NSString *prefixStr;
@property (retain, nonatomic) NSString *suffixStr;
@property (retain, nonatomic) NSNumber *saleNum;
@property (retain, nonatomic) NSString *topImageURL;
@property (retain, nonatomic) NSArray *bgColors;
@property (retain, nonatomic) NSArray *borderColors;
@property (nonatomic) double bgLeftMargin;
@property (nonatomic) BOOL sameContentSize;
@property (nonatomic) BOOL showEnhancedDesign;
@property (retain, nonatomic) NSNumber *dismissInterval;
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) long long lastTrackType;
@property (retain, nonatomic) NSString *hotsaleType;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSMutableArray *followUpItems;
@property (nonatomic) double vibeLeftMargin;
@property (nonatomic) BOOL circularVibe;
@property (nonatomic) BOOL priceFormatStyle;
@property (nonatomic) BOOL shouldCheckNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)updateWithMsgHotSaleInfoMessage:(id)a0;
- (BOOL)isHotsale;
- (BOOL)isStock;
- (BOOL)isRank;
- (void)updateWithAuctionAtmosphereMessage:(id)a0;
- (void).cxx_destruct;
- (BOOL)isComment;

@end

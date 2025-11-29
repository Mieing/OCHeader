@class NSString, NSMutableArray;

@interface ScanProductItem : NSObject <NSCoding>

@property (nonatomic) int type;
@property (nonatomic) int asyncFlag;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSString *source;
@property (retain, nonatomic) NSString *headerBackgroundUrl;
@property (retain, nonatomic) NSString *headerMask;
@property (retain, nonatomic) NSString *certification;
@property (retain, nonatomic) NSString *certificationUrl;
@property (retain, nonatomic) NSString *detailUrl;
@property (retain, nonatomic) NSString *shareUrl;
@property (retain, nonatomic) NSString *playUrl;
@property (retain, nonatomic) NSString *feedBackUrl;
@property (retain, nonatomic) NSString *introTitle;
@property (retain, nonatomic) NSString *introLink;
@property (retain, nonatomic) NSMutableArray *actionLists;
@property (retain, nonatomic) NSString *productID;
@property (retain, nonatomic) NSMutableArray *detailList;
@property (retain, nonatomic) NSMutableArray *bannerList;
@property (retain, nonatomic) NSString *extInfo;
@property (retain, nonatomic) NSString *exposeUrl;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)toXml:(int)a0;
- (void).cxx_destruct;

@end

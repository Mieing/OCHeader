@class NSString;

@interface AWENearbyPOICardSerialModel : NSObject <NSCoding, NSCopying>

@property (nonatomic) long long cardType;
@property (nonatomic) long long timeStamp;
@property (nonatomic) BOOL cardClick;
@property (nonatomic) BOOL cardSkip;
@property (nonatomic) long long cardStayTime;
@property (nonatomic) BOOL cardDislike;
@property (nonatomic) BOOL cardFavorite;
@property (nonatomic) BOOL cardClickProduct;
@property (retain, nonatomic) NSString *poiCardID;
@property (retain, nonatomic) NSString *poiIDList;
@property (nonatomic) BOOL cardEnterLifeMall;

- (id)serialArrayToStringWithCardType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

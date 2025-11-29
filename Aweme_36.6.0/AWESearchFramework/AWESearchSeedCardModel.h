@class NSString, NSArray, NSNumber, NSAttributedString;

@interface AWESearchSeedCardModel : AWESearchBusinessContainerNormalBaseModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *coverImgURLList;
@property (copy, nonatomic) NSArray *authorImgURLList;
@property (copy, nonatomic) NSString *author;
@property (retain, nonatomic) NSNumber *createTime;
@property (nonatomic) BOOL like;
@property (retain, nonatomic) NSNumber *likeNumber;
@property (nonatomic) double imageOriginWidth;
@property (nonatomic) double imageOriginHeight;
@property (nonatomic) double infoZoneHeight;
@property (copy, nonatomic) NSAttributedString *displayTitle;
@property (nonatomic) struct CGSize { double width; double height; } titleSize;
@property (nonatomic) double cardHeight;
@property (nonatomic) double imageHeight;
@property (nonatomic) double cardWidth;
@property (retain, nonatomic) NSString *feedbackUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

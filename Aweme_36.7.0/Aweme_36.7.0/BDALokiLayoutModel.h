@class NSString, NSNumber;

@interface BDALokiLayoutModel : BDXBridgeModel

@property (nonatomic) BOOL visible;
@property (copy, nonatomic) NSString *slotName;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSString *leftToLeftOf;
@property (copy, nonatomic) NSString *leftToRightOf;
@property (copy, nonatomic) NSString *rightToRightOf;
@property (copy, nonatomic) NSString *rightToLeftOf;
@property (copy, nonatomic) NSString *topToTopOf;
@property (copy, nonatomic) NSString *topToBottomOf;
@property (copy, nonatomic) NSString *bottomToBottomOf;
@property (copy, nonatomic) NSString *bottomToTopOf;
@property (retain, nonatomic) NSNumber *offsetTop;
@property (retain, nonatomic) NSNumber *offsetLeft;
@property (retain, nonatomic) NSNumber *offsetBottom;
@property (retain, nonatomic) NSNumber *offsetRight;
@property (nonatomic) long long renderDelayTime;
@property (nonatomic) long long renderMode;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

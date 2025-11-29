@class NSNumber;

@interface AWEBarLayoutModel : AWEBaseApiModel

@property (nonatomic) double height;
@property (nonatomic) double width;
@property (retain, nonatomic) NSNumber *topMargin;
@property (retain, nonatomic) NSNumber *bottomMargin;
@property (retain, nonatomic) NSNumber *leftMargin;
@property (retain, nonatomic) NSNumber *rightMargin;
@property (retain, nonatomic) NSNumber *topInset;
@property (retain, nonatomic) NSNumber *bottomInset;
@property (retain, nonatomic) NSNumber *leftInset;
@property (retain, nonatomic) NSNumber *rightInset;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

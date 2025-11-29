@class NSNumber, NSString;

@interface AWESearchMerchandiseIconPosition : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *marginTop;
@property (retain, nonatomic) NSNumber *marginBottom;
@property (retain, nonatomic) NSNumber *marginLeft;
@property (retain, nonatomic) NSNumber *marginRight;
@property (copy, nonatomic) NSString *archPosition;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

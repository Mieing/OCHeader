@class NSNumber, NSString;

@interface AWEHotSearchBottomBarConfigInsertInfo : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *insertPos;
@property (retain, nonatomic) NSNumber *bgColorLastIndex;
@property (copy, nonatomic) NSString *structId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

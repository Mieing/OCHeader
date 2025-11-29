@class NSString;

@interface AWEDecorateViewModel : AWEBaseApiModel

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double itemWidth;
@property (nonatomic) double itemHeight;
@property (nonatomic) double topOffset;
@property (nonatomic) double leftOffset;
@property (nonatomic) double bottomOffset;
@property (nonatomic) double rightOffset;

+ (id)JSONKeyPathsByPropertyKey;
+ (Class)classForParsingJSONDictionary:(id)a0;

- (void).cxx_destruct;

@end

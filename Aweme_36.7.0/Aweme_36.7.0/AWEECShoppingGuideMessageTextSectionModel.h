@class NSString;

@interface AWEECShoppingGuideMessageTextSectionModel : AWEECShoppingGuideMessageSectionModel

@property (retain, nonatomic) NSString *text;
@property (nonatomic) BOOL foldable;
@property (retain, nonatomic) NSString *cardId;
@property (nonatomic) long long limitLine;
@property (nonatomic) BOOL closeSearchWordRequest;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSArray, NSAttributedString;

@interface AWEHPAttributeTextArrayResultModel : NSObject

@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSArray *resultItems;
@property (copy, nonatomic) NSAttributedString *attributeText;

- (void).cxx_destruct;

@end

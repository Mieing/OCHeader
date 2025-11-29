@class NSAttributedString;

@interface AWEECAITransformerPreference : NSObject

@property (copy, nonatomic) id /* block */ exposureBlock;
@property (retain, nonatomic) NSAttributedString *searchIconAttributedStr;
@property (copy, nonatomic) id /* block */ clickSearchWordActionBlock;
@property (copy, nonatomic) id /* block */ clickLinkActionBlock;
@property (copy, nonatomic) id /* block */ retryBlock;
@property (retain, nonatomic) NSAttributedString *loadingAttributedString;

+ (id)defaultParagraphStyle;

- (void).cxx_destruct;

@end

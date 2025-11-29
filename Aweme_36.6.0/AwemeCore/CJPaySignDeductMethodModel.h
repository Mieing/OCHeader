@class NSString, NSArray, NSURL, NSAttributedString;

@interface CJPaySignDeductMethodModel : NSObject

@property (retain, nonatomic) NSString *deductMethodNamePrefix;
@property (retain, nonatomic) NSURL *deductMethodIconURL;
@property (copy, nonatomic) NSString *deductMethodName;
@property (copy, nonatomic) NSAttributedString *deductMethodDescAttributeStr;
@property (copy, nonatomic) NSArray *deductOrderDescItems;

- (void).cxx_destruct;

@end

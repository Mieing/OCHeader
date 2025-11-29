@class NSArray, NSString;

@interface AWEIMMessageBindButtonInfoModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *content;
@property (copy, nonatomic) NSString *abGroup;
@property (retain, nonatomic) NSArray *fitContent;
@property (nonatomic) struct CGSize { double width; double height; } size;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString, NSMutableAttributedString, NSDictionary;

@interface AFDBarrageContentModel : NSObject

@property (retain, nonatomic) NSString *contentStr;
@property (retain, nonatomic) NSMutableAttributedString *prefixStr;
@property (retain, nonatomic) NSString *suffixStr;
@property (retain, nonatomic) NSDictionary *contentLabelParameter;
@property (nonatomic) double contentMaxWidth;

- (void).cxx_destruct;

@end

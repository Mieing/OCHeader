@class NSString, NSAttributedString;

@interface AWEIMNetworkGuideTipContent : NSObject

@property (retain, nonatomic) NSString *content;
@property (nonatomic) long long fontSize;
@property (nonatomic) BOOL isBold;
@property (retain, nonatomic) NSAttributedString *attrStr;

- (id)makeAttrStr;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end

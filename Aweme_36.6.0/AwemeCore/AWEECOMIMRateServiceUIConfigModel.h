@class NSString, NSArray;

@interface AWEECOMIMRateServiceUIConfigModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isGift;
@property (nonatomic) BOOL isStack;
@property (nonatomic) double iconWidth;
@property (nonatomic) double iconHeight;
@property (copy, nonatomic) NSArray *iconList;

- (id)initWithUIConfigDict:(id)a0;
- (void).cxx_destruct;

@end

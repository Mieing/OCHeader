@class NSArray, NSString;

@interface WCCanvasComponentScrollGroupInfo : MMObject <NSCoding>

@property (retain, nonatomic) NSArray *componentItemList;
@property (retain, nonatomic) NSString *indicatorColor;
@property (retain, nonatomic) NSString *currentIndicatorColor;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

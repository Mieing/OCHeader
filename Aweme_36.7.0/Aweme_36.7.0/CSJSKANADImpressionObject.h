@class CSJSKANADImpressionModel, NSDate;

@interface CSJSKANADImpressionObject : NSObject <NSCoding>

@property (retain) NSDate *impressionDate;
@property (retain, nonatomic) CSJSKANADImpressionModel *skan_Impression_item;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

@class WCDataItem;

@interface WCPattern : NSObject <NSCoding>

@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) double lastAccessTime;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end

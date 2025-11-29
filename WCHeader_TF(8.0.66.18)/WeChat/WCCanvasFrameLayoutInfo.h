@class NSArray;

@interface WCCanvasFrameLayoutInfo : MMObject <NSCoding>

@property (retain, nonatomic) NSArray *layoutItems;
@property (nonatomic) unsigned int cornerRadius;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end

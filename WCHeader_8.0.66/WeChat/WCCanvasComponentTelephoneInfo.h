@class NSArray;

@interface WCCanvasComponentTelephoneInfo : NSObject

@property (retain, nonatomic) NSArray *phoneNumList;
@property (nonatomic) double topLineSize;
@property (nonatomic) double bottomLineSize;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

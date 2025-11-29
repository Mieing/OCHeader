@class NSString, HybridContext;

@interface HybridLynxViewPreLayoutConfig : NSObject

@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) HybridContext *context;
@property (nonatomic) double preferredLayoutWidth;

- (void).cxx_destruct;

@end

@class NSArray, NSDictionary;

@interface AWEHPSideBarReopenModel : NSObject

@property (nonatomic) BOOL animate;
@property (copy, nonatomic) NSArray *pushStack;
@property (copy, nonatomic) NSArray *presentStack;
@property (copy, nonatomic) NSDictionary *trackParams;

- (void).cxx_destruct;

@end

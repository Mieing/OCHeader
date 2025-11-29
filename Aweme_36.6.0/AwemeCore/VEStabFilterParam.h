@class NSString;

@interface VEStabFilterParam : NSObject

@property (retain, nonatomic) NSString *matrixJson;
@property (retain, nonatomic) NSString *ptsListJson;
@property (nonatomic) struct CGSize { double width; double height; } processSize;

- (void).cxx_destruct;

@end

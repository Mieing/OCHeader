@class NSString;

@interface AWEIMKeywordsPOIManagerWrapper : AWEIMPOIManagerWrapper

@property (copy, nonatomic) NSString *curentKeyword;

- (void)startSearchKeywords:(id)a0 userCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 aroundCoordinate2d:(struct CLLocationCoordinate2D { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;

@end

@class NSString;

@interface WAMapAppNavigateItem : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;

- (id)init;
- (BOOL)isNameOnly;
- (void).cxx_destruct;

@end

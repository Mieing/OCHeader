@class NSString;

@interface NavigateItem : MMObject

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *poiId;
@property (nonatomic) BOOL isNameOnly;

- (void).cxx_destruct;

@end

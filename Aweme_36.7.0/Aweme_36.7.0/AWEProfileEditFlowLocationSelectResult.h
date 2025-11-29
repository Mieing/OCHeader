@class AWEProfileLocationSegment;

@interface AWEProfileEditFlowLocationSelectResult : NSObject

@property (retain, nonatomic) AWEProfileLocationSegment *country;
@property (retain, nonatomic) AWEProfileLocationSegment *province;
@property (retain, nonatomic) AWEProfileLocationSegment *city;
@property (retain, nonatomic) AWEProfileLocationSegment *district;

- (void).cxx_destruct;
- (id)displayString;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

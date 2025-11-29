@class NSString;

@interface AWELiveSkylightHeaderConfig : NSObject

@property (nonatomic) double sectionCellWidth;
@property (copy, nonatomic) NSString *headerTitle;
@property (nonatomic) BOOL isNeedStick;
@property (readonly, nonatomic) double offsetForCenterX;

- (id)initWithCellwidth:(double)a0 headerTitle:(id)a1 isNeedStick:(BOOL)a2;
- (id)initWithCellwidth:(double)a0 offsetForCenterX:(double)a1 headerTitle:(id)a2 isNeedStick:(BOOL)a3;
- (void).cxx_destruct;

@end

@class NSString;

@interface WCAdFullCardGestureInfo : NSObject <NSCoding>

@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long endTime;
@property (retain, nonatomic) NSString *points;
@property (nonatomic) double distance;
@property (retain, nonatomic) NSString *color;
@property (nonatomic) BOOL isSimpleGesture;
@property (nonatomic) unsigned long long validDistance;
@property (nonatomic) BOOL breakFrameFlag;
@property (nonatomic) unsigned long long radius;
@property (nonatomic) unsigned long long pointsBasicWidth;
@property (nonatomic) unsigned long long pointsBasicHeight;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)getLineColor;
- (BOOL)isValid;
- (id)getTargetCGPointsArray;
- (void).cxx_destruct;

@end

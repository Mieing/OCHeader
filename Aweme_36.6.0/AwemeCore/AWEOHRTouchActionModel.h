@class NSString;

@interface AWEOHRTouchActionModel : NSObject

@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) double endPositionX;
@property (nonatomic) double endPositionY;
@property (nonatomic) double touchTimeS;

- (void).cxx_destruct;

@end

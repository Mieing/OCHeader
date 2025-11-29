@class NSArray;

@interface WCGestureRecognizeModel : NSObject

@property (retain, nonatomic) NSArray *userPathPoints;
@property (retain, nonatomic) NSArray *templatePoints;
@property (nonatomic) double cosDistance;
@property (nonatomic) double radius;
@property (nonatomic) double realWidth;
@property (nonatomic) double realHeight;
@property (nonatomic) double basicWidth;
@property (nonatomic) double basicHeight;
@property (nonatomic) BOOL needReport;
@property (nonatomic) BOOL forbidPassTemplatePoints;

- (void).cxx_destruct;

@end

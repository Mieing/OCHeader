@class NSNumber, NSString;

@interface IESECCartPopupUIConfig : NSObject

@property (copy, nonatomic) NSNumber *resizeDuration;
@property (copy, nonatomic) NSString *maskColor;
@property (nonatomic) BOOL closeByMask;
@property (nonatomic) BOOL closeByGesture;
@property (nonatomic) BOOL dragBack;
@property (nonatomic) BOOL hideable;
@property (nonatomic) BOOL draggable;
@property (copy, nonatomic) NSString *lynxUrl;
@property (copy, nonatomic) NSNumber *width;
@property (copy, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSNumber *widthPercentParam;
@property (copy, nonatomic) NSNumber *heightPercentParam;
@property (nonatomic) double radius;

- (void).cxx_destruct;
- (id)initWithSchema:(id)a0;

@end

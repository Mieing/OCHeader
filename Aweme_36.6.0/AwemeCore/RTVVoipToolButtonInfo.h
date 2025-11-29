@class RxTwoTuple;

@interface RTVVoipToolButtonInfo : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) RxTwoTuple *title;
@property (copy, nonatomic) RxTwoTuple *imageName;
@property (copy, nonatomic) RxTwoTuple *accessibilityValues;
@property (copy, nonatomic) RxTwoTuple *accessibilityLabels;
@property (nonatomic) double imageSize;
@property (nonatomic) double textSpacing;
@property (nonatomic) double textWeight;
@property (nonatomic) BOOL customEnablement;

- (void).cxx_destruct;

@end

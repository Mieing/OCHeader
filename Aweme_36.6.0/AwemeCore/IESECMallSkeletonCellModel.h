@class NSString, NSArray;

@interface IESECMallSkeletonCellModel : NSObject

@property (nonatomic) long long axis;
@property (nonatomic) long long alignment;
@property (nonatomic) double height;
@property (nonatomic) double width;
@property (nonatomic) double widthRadio;
@property (nonatomic) double widthOffset;
@property (retain, nonatomic) NSString *color;
@property (retain, nonatomic) NSString *image;
@property (nonatomic) double spacing;
@property (nonatomic) double radius;
@property (nonatomic) long long direction;
@property (retain, nonatomic) NSArray *subCellModel;
@property (retain, nonatomic) NSArray *margin;

+ (id)modelContainerPropertyGenericClass;

- (void).cxx_destruct;

@end

@class NSString, HTSLiveImage, NSMutableArray, HTSLiveRoom;

@interface OperationFoldContent : IESLivePBBaseMessage

@property (nonatomic) int moduleSource;
@property (copy, nonatomic) NSString *moduleTitle;
@property (retain, nonatomic) HTSLiveRoom *room;
@property (nonatomic) BOOL hasRoom;
@property (retain, nonatomic) NSMutableArray *backgroundRgbaArray;
@property (readonly, nonatomic) unsigned long long backgroundRgbaArray_Count;
@property (retain, nonatomic) HTSLiveImage *verticalImage;
@property (nonatomic) BOOL hasVerticalImage;
@property (retain, nonatomic) HTSLiveImage *circleRightImage;
@property (nonatomic) BOOL hasCircleRightImage;
@property (nonatomic) BOOL isFold;
@property (copy, nonatomic) NSString *showType;
@property (copy, nonatomic) NSString *moduleName;

+ (id)descriptor;

@end

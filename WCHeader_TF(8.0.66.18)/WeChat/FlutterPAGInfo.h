@class NSString;

@interface FlutterPAGInfo : NSObject

@property (nonatomic) long long pagId;
@property (copy, nonatomic) NSString *filepath;
@property (nonatomic) BOOL isFromAsset;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) long long repeatCount;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) double maxFrameRate;
@property (nonatomic) double playSpeed;

+ (id)makeWithPagId:(long long)a0 filepath:(id)a1 isFromAsset:(BOOL)a2 width:(double)a3 height:(double)a4 repeatCount:(long long)a5 autoPlay:(BOOL)a6 maxFrameRate:(double)a7 playSpeed:(double)a8;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end

@class NSNumber, FlutterStandardTypedData;

@interface LVSnapshotInfo : NSObject

@property (retain, nonatomic) FlutterStandardTypedData *imageBytes;
@property (retain, nonatomic) NSNumber *x;
@property (retain, nonatomic) NSNumber *y;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;

+ (id)makeWithImageBytes:(id)a0 x:(id)a1 y:(id)a2 width:(id)a3 height:(id)a4;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end

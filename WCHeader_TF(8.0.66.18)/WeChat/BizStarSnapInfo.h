@class NSNumber, FlutterStandardTypedData;

@interface BizStarSnapInfo : NSObject

@property (retain, nonatomic) NSNumber *left;
@property (retain, nonatomic) NSNumber *top;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) FlutterStandardTypedData *buffer;

+ (id)makeWithLeft:(id)a0 top:(id)a1 width:(id)a2 height:(id)a3 buffer:(id)a4;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end

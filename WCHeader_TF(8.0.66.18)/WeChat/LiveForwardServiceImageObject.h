@class NSNumber, FlutterStandardTypedData;

@interface LiveForwardServiceImageObject : NSObject

@property (retain, nonatomic) FlutterStandardTypedData *buff;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;

+ (id)makeWithBuff:(id)a0 width:(id)a1 height:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end

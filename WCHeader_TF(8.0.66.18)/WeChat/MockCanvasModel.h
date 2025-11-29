@class NSString;

@interface MockCanvasModel : NSObject

@property (copy, nonatomic) NSString *frameSetName;
@property (copy, nonatomic) NSString *frameSetData;

+ (id)makeWithFrameSetName:(id)a0 frameSetData:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end

@class NSNumber;

@interface TPVideoSizeRet : NSObject

@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;

+ (id)makeWithWidth:(id)a0 height:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end

@class NSValue, NSMutableArray;

@interface VEClientPath : NSObject

@property (retain, nonatomic) NSMutableArray *vertexeArray;
@property (retain, nonatomic) NSValue *timestamp;

+ (id)clientPathWithDic:(id)a0;

- (id)toDicInfo;
- (void).cxx_destruct;

@end

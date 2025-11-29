@class NSArray, NSDictionary;

@interface QQApiImageArrayForQZoneObject : QQApiObject

@property (copy, nonatomic) NSArray *imageDataArray;
@property (copy, nonatomic) NSDictionary *extMap;

+ (id)objectWithimageDataArray:(id)a0 title:(id)a1 extMap:(id)a2;

- (id)initWithImageArrayData:(id)a0 title:(id)a1 extMap:(id)a2;
- (void).cxx_destruct;

@end

@class NSString, QQApiObject;

@interface ArkObject : NSObject

@property (copy, nonatomic) NSString *arkData;
@property (retain, nonatomic) QQApiObject *qqApiObject;

+ (id)objectWithData:(id)a0 qqApiObject:(id)a1;

- (id)initWithData:(id)a0 qqApiObject:(id)a1;
- (void).cxx_destruct;

@end

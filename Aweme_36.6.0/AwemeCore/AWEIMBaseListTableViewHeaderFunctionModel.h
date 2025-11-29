@class NSString, NSNumber;

@interface AWEIMBaseListTableViewHeaderFunctionModel : NSObject

@property (copy, nonatomic) NSString *functionName;
@property (copy, nonatomic) NSString *functionIcon;
@property (retain, nonatomic) NSNumber *functionHeight;

+ (id)modelWithName:(id)a0;

- (void).cxx_destruct;

@end

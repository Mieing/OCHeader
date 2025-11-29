@class NSString;

@interface IESProcessConfig : NSObject

@property (nonatomic) BOOL isSync;
@property (copy, nonatomic) NSString *modelPath;

- (id)initWithModel:(id)a0 withSync:(BOOL)a1;
- (void).cxx_destruct;

@end

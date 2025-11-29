@class NSString, NSArray;

@interface AWEIMChineseDecomposer : NSObject

@property (copy, nonatomic) NSString *pinYin;
@property (copy, nonatomic) NSString *initials;
@property (copy, nonatomic) NSArray *components;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;

@end

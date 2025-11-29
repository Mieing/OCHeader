@class NSString, NSDictionary;

@interface AWEContentEvalFactor : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *parserName;
@property (copy, nonatomic) NSDictionary *parseInfo;
@property (retain, nonatomic) id defaultValue;

- (id)initWithName:(id)a0 config:(id)a1;
- (void).cxx_destruct;

@end

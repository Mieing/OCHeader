@class NSString;

@interface MMOption : NSObject

@property (readonly, nonatomic) NSString *content;
@property (readonly, nonatomic) BOOL enabled;

+ (id)OptionWithContent:(id)a0 enabled:(BOOL)a1;

- (id)initWithContent:(id)a0 enabled:(BOOL)a1;
- (id)description;
- (void).cxx_destruct;

@end

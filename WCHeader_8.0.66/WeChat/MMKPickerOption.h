@class NSString;

@interface MMKPickerOption : NSObject

@property (readonly, nonatomic) NSString *optionId;
@property (readonly, nonatomic) NSString *text;

+ (id)KPickerOptionWithOptionId:(id)a0 text:(id)a1;

- (id)initWithOptionId:(id)a0 text:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end

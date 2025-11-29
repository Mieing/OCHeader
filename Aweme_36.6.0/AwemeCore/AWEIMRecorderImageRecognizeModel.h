@class NSDictionary, NSString, NSArray;

@interface AWEIMRecorderImageRecognizeModel : NSObject

@property (copy, nonatomic) NSDictionary *textMapper;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *recognizeTags;

- (id)resultModel;
- (id)initWithState:(long long)a0 text:(id)a1;
- (id)__textWithState:(long long)a0;
- (id)initWithTextMapper:(id)a0;
- (void)updateState:(long long)a0 text:(id)a1;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)updateTags:(id)a0;

@end

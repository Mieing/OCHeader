@class NSString, NSDictionary;

@interface AWESearchAIGCInputPatternConfig : NSObject

@property (copy, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSString *mode;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *clientServerExtra;
@property (copy, nonatomic) NSDictionary *patternExtra;
@property (nonatomic) BOOL disableSug;
@property (nonatomic) BOOL disableVoiceInput;
@property (nonatomic) BOOL disablePanel;

- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end

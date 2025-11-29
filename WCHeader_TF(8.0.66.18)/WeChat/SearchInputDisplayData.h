@class NSString;

@interface SearchInputDisplayData : NSObject

@property (nonatomic) unsigned long long inputId;
@property (retain, nonatomic) NSString *resultText;
@property (nonatomic) BOOL isEnd;

- (id)init;
- (void).cxx_destruct;

@end

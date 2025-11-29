@class NSDictionary, NSString;
@protocol Optional;

@interface RTVVoipCommandItem : JSONModel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSDictionary<Optional> *contentDictionary;
@property (copy, nonatomic) NSString *callID;

+ (id)keyMapper;
+ (id)commandItemWithDictionary:(id)a0;

- (id)__contentDictionaryWithCallID:(id)a0 dictionary:(id)a1;
- (void).cxx_destruct;
- (id)content;

@end

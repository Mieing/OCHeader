@class NSArray, NSString;

@interface AWEIMMessagePropertyItemGroup : NSObject

@property (copy, nonatomic) NSArray *properties;
@property (nonatomic) BOOL hasPropertyFromMe;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *tagName;
@property (nonatomic) unsigned long long count;
@property (nonatomic) long long createdAt;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL needRefresh;

+ (id)groupWithKey:(id)a0 seKey:(id)a1 type:(unsigned long long)a2 ttMsg:(id)a3;

- (void).cxx_destruct;

@end

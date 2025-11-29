@class NSString;

@interface TMLogContextInfo : NSObject

@property (readonly, nonatomic) unsigned long long ts;
@property (readonly, copy, nonatomic) NSString *contextKey;
@property (readonly, nonatomic) id contextValue;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 value:(id)a1;

@end

@class NSString, NSMutableDictionary;

@interface GameWebVideoIncompleteResponseHeader : NSObject {
    NSMutableDictionary *_imcompleteResponseHeader;
}

@property (nonatomic) unsigned long long contentTotalLength;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *acceptRanges;

+ (id)getValueFromResponseHeader:(id)a0 byInsensitiveKey:(id)a1;

- (id)initWithResponse:(id)a0;
- (id)initWithVideoCacheInfo:(id)a0;
- (id)incompleteResponseHeaderFields;
- (BOOL)isValid;
- (void).cxx_destruct;

@end

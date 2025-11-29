@class NSString;

@interface DIRSValue : NSObject <IRISValue> {
    id raw;
    long long source;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dictioanryValue;
- (id)initWithValue:(id)a0 withSource:(long long)a1;
- (id)rawValue;
- (void).cxx_destruct;
- (long long)source;
- (BOOL)boolValue;
- (double)doubleValue;
- (id)arrayValue;
- (id)stringValue;
- (long long)integerValue;

@end

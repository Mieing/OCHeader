@interface IRISConfigValue : NSObject {
    id raw;
    long long source;
}

- (id)dictioanryValue;
- (id)initConfigValue:(id)a0 withSource:(long long)a1;
- (id)rawValue;
- (void).cxx_destruct;
- (long long)source;
- (id)description;
- (BOOL)boolValue;
- (double)doubleValue;
- (id)arrayValue;
- (id)stringValue;
- (long long)integerValue;

@end

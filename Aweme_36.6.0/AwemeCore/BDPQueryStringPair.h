@interface BDPQueryStringPair : NSObject

@property (retain, nonatomic) id field;
@property (retain, nonatomic) id value;

- (id)URLEncodedStringValueWithEncoding:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithField:(id)a0 value:(id)a1;

@end

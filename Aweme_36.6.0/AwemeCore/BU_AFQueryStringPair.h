@interface BU_AFQueryStringPair : NSObject

@property (retain, nonatomic) id field;
@property (retain, nonatomic) id value;

- (id)URLEncodedStringValue;
- (void).cxx_destruct;
- (id)initWithField:(id)a0 value:(id)a1;

@end

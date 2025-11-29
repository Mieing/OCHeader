@class NSString, NSMutableDictionary;

@interface CSJABTest : NSObject <NSCoding, CSJToDictionary>

@property (retain, nonatomic) NSMutableDictionary *dictionary;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *param;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupDataWithDictionary:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

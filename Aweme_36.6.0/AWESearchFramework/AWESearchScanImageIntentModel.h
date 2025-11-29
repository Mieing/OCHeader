@class NSString, NSArray;

@interface AWESearchScanImageIntentModel : NSObject

@property (copy, nonatomic) NSString *flag;
@property (copy, nonatomic) NSArray *keys;
@property (copy, nonatomic) NSString *intent;
@property (copy, nonatomic) NSString *text;

- (BOOL)verifyWithAWEAwemeModel:(id)a0;
- (id)getIntentData;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end

@class NSString;

@interface BDAAppStoreEventModel : NSObject

@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *downloadURL;
@property (copy, nonatomic) NSString *adExtraData;

- (id)initWithTag:(id)a0 value:(id)a1 logExtra:(id)a2 downloadURL:(id)a3 adExtraData:(id)a4;
- (id)transToDictionary;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end

@class NSString;

@interface WCFinderOriginalStateDeclareActionConfig : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *exportId;
@property (copy, nonatomic) NSString *nonceId;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned long long mediaType;

- (id)description;
- (id)toJsonStr;
- (id)initWithDictionary:(id)a0;
- (id)initWithJSONString:(id)a0;
- (void).cxx_destruct;

@end

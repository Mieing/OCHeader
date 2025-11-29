@class NSData, NSString;

@interface WCFinderSearchEventRequestParams : NSObject

@property (retain, nonatomic) NSData *lastBuffer;
@property (copy, nonatomic) NSString *queryText;
@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) NSString *finderNickname;
@property (copy, nonatomic) NSString *eventName;
@property (nonatomic) unsigned long long topicId;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithJSONString:(id)a0;
- (void).cxx_destruct;

@end

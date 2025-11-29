@class NSDictionary, NSString, BDByteCastPPCmd;

@interface BDByteCastPPBaseCmd : NSObject

@property (class, readonly, copy, nonatomic) NSDictionary *requestClassMap;
@property (class, readonly, copy, nonatomic) NSDictionary *responseClassMap;

@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *connectId;
@property (retain, nonatomic) BDByteCastPPCmd *body;

+ (id)modelWithJSON:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)jsonString;

@end

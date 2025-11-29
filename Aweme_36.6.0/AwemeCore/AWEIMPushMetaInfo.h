@class NSString, NSDictionary;

@interface AWEIMPushMetaInfo : NSObject

@property (readonly, copy, nonatomic) NSString *messageID;
@property (readonly, copy, nonatomic) NSString *cid;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (readonly, nonatomic) long long sourceType;

- (id)initWithMessageID:(id)a0 cid:(id)a1 sourceType:(long long)a2;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end

@class NSString;

@interface WCFinderAudioListenLaterConfig : NSObject

@property (copy, nonatomic) NSString *listen_id;
@property (copy, nonatomic) NSString *src_id;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *cover;
@property (copy, nonatomic) NSString *author;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *tid;
@property (copy, nonatomic) NSString *nonce_id;

- (id)description;
- (id)toJsonStr;
- (id)initWithDictionary:(id)a0;
- (id)initWithJSONString:(id)a0;
- (void).cxx_destruct;

@end

@class NSString;

@interface AWEIMAudioTranslateResultModel : NSObject

@property (copy, nonatomic) NSString *audioText;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *servermessageID;
@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSString *uri;

- (id)getContentDict;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end

@class NSString, NSData, JsApiSourceInfo;

@interface WCFinderGetTopicInfoRequestParams : NSObject

@property (nonatomic) int topicType;
@property (nonatomic) int prefetchType;
@property (copy, nonatomic) NSString *topicWording;
@property (nonatomic) unsigned long long topicId;
@property (copy, nonatomic) NSString *encryptedEventTopicId;
@property (copy, nonatomic) NSString *fromObjectId;
@property (retain, nonatomic) NSData *topicInfoPassbuff;
@property (nonatomic) int getTopicInfoFlag;
@property (retain, nonatomic) JsApiSourceInfo *jsApiSourceInfo;

- (id)initWithTopicType:(int)a0 prefetchType:(int)a1 topicWording:(id)a2 topicId:(unsigned long long)a3 encryptedEventTopicId:(id)a4 fromObjectId:(id)a5 topicInfoPassbuff:(id)a6 getTopicInfoFlag:(int)a7;
- (id)description;
- (void).cxx_destruct;

@end

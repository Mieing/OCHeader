@class NSString, NSData;

@interface WCFinderJumpNativeTopicParams : NSObject

@property (nonatomic) int topicType;
@property (copy, nonatomic) NSString *topic;
@property (copy, nonatomic) NSString *byPassInfoString;
@property (retain, nonatomic) NSData *byPassInfo;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void).cxx_destruct;

@end

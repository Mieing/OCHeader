@class NSString;

@interface WCAdChannelTraceMsg : NSObject

@property (nonatomic) int actType;
@property (nonatomic) int actCount;
@property (retain, nonatomic) NSString *tag;
@property (nonatomic) long long actValue;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void).cxx_destruct;

@end

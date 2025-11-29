@class NSString, NSMutableArray;

@interface WCAdChannelContent : NSObject

@property (retain, nonatomic) NSString *uxInfo;
@property (nonatomic) int scene;
@property (retain, nonatomic) NSMutableArray *adTraceMsgList;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void).cxx_destruct;

@end

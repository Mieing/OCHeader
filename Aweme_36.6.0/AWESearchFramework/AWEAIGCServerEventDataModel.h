@class NSMutableData, NSString, NSMutableDictionary;

@interface AWEAIGCServerEventDataModel : NSObject

@property (retain, nonatomic) NSMutableData *data;
@property (copy, nonatomic) NSString *lastKey;
@property (retain, nonatomic) NSMutableDictionary *prepareSendEvent;

- (void).cxx_destruct;

@end

@class NSString;

@interface AWEPaySKMVoiceBroadcastTask : NSObject

@property (copy, nonatomic) NSString *audioUrl;
@property (copy, nonatomic) NSString *amountStr;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end

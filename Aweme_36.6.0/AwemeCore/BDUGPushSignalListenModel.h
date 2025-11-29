@class NSString, NSArray;

@interface BDUGPushSignalListenModel : NSObject

@property (copy, nonatomic) NSString *signalName;
@property (nonatomic) unsigned long long signalType;
@property (copy, nonatomic) NSArray *signalSceneArray;

- (void).cxx_destruct;

@end

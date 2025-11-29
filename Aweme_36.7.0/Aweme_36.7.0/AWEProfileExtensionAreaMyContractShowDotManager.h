@class NSMutableDictionary;

@interface AWEProfileExtensionAreaMyContractShowDotManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventMap;
@property (retain, nonatomic) NSMutableDictionary *consumedEventMap;
@property (retain, nonatomic) NSMutableDictionary *timeMap;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end

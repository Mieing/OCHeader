@class NSMutableDictionary;

@interface IESECTabKitChunkReqManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *processReq;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end

@class NSString;

@interface ASSStorageModel : NSObject

@property (retain, nonatomic) NSString *apdid;
@property (retain, nonatomic) NSString *staticInfoHash;
@property (retain, nonatomic) NSString *localToken;
@property (retain, nonatomic) NSString *timeStamp;

+ (id)storageModelWithResponse:(id)a0 andHash:(id)a1;

- (void).cxx_destruct;
- (id)jsonDescription;
- (id)dictionaryDescription;

@end

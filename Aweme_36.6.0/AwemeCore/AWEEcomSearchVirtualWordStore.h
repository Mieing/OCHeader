@class NSString, NSMutableDictionary;

@interface AWEEcomSearchVirtualWordStore : NSObject

@property (copy, nonatomic) NSString *currentUid;
@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSMutableDictionary *virtualWords;

+ (id)sharedInstance;

- (void)saveEcomVirtualWords:(id)a0;
- (id)getEcomVirtualWordsWithType:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

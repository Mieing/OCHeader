@class NSMutableDictionary;

@interface AWEVideoInsertHelper : NSObject

@property (retain, nonatomic) NSMutableDictionary *resultDict;

+ (id)sharedInstance;

- (BOOL)getSchemeVideoInsertStatus:(id)a0;
- (void)markVideoInsertResult:(id)a0 result:(BOOL)a1;
- (id)getUniqueID:(id)a0;
- (id)awemeIDFromschemePath:(id)a0;
- (id)sessionIDForScheme:(id)a0;
- (void).cxx_destruct;

@end

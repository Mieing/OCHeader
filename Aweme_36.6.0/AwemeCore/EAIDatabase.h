@class WCTDatabase;

@interface EAIDatabase : NSObject

@property (retain, nonatomic) WCTDatabase *db;

- (id)getModel:(id)a0;
- (id)getUserPortrait:(id)a0 name:(id)a1;
- (BOOL)shouldCheckModelUpdate:(id)a0;
- (BOOL)updateLastUpdateCheck:(id)a0;
- (BOOL)insertOrReplaceUserPortrait:(id)a0;
- (BOOL)insertOrReplaceModel:(id)a0;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;

@end

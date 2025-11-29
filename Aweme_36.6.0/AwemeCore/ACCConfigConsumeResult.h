@class NSString, NSMutableArray, NSError;

@interface ACCConfigConsumeResult : NSObject

@property (readonly, nonatomic) NSMutableArray *tempErrors;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSError *fatalError;
@property (readonly, nonatomic) BOOL hasChanges;
@property (retain, nonatomic) id object;

+ (id)createWithIdentifier:(id)a0;

- (void)addFatalError:(id)a0;
- (id)initWithIdentifier:(id)a0 fatalError:(id)a1;
- (void)markDidChange;
- (id)nonFatalErrors;
- (void)addNonFatalError:(id)a0;
- (void)mergeChildResult:(id)a0;
- (void).cxx_destruct;

@end

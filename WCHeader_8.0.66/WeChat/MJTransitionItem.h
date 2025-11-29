@class NSString, NSURL;

@interface MJTransitionItem : NSObject

@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSString *transitionID;
@property (retain, nonatomic) NSString *transitionName;
@property (retain, nonatomic) NSURL *previewImageURL;

- (id)initWithMaterial:(id)a0;
- (id)initWithTransitionID:(id)a0 transitionName:(id)a1 previewImageURL:(id)a2 status:(unsigned long long)a3;
- (void)updateStatus:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end

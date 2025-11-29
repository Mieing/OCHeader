@class NSString;

@interface BDNinjaCloneItem : NSObject

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ dataCollectionBlock;
@property (nonatomic) BOOL shouldUploadOnline;

- (void).cxx_destruct;
- (id)init;
- (id)initWithKey:(id)a0;

@end

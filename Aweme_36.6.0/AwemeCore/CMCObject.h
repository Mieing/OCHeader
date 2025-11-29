@class NSString;

@interface CMCObject : NSObject

@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *name;

- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)a0;

@end

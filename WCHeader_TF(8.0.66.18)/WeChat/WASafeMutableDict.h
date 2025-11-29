@class NSString, NSMutableDictionary, NSObject;

@interface WASafeMutableDict : NSObject

@property (weak, nonatomic) NSObject *holder;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL writable;
@property (retain, nonatomic) NSMutableDictionary *dic;

- (id)initWithHolder:(id)a0 propName:(id)a1 writable:(BOOL)a2;
- (void)writeBack;
- (void)dealloc;
- (void).cxx_destruct;

@end

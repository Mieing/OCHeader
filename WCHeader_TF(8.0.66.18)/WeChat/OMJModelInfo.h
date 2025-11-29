@class NSString;

@interface OMJModelInfo : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *filePath;
@property (readonly, copy, nonatomic) NSString *version;

- (id)initWithName:(id)a0 filePath:(id)a1 version:(id)a2;
- (id)description;
- (void).cxx_destruct;

@end

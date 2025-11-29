@class NSString;

@interface AweQuaterbackInfo : NSObject

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) BOOL async;
@property (copy, nonatomic) NSString *moduleId;

- (void).cxx_destruct;
- (id)init;

@end

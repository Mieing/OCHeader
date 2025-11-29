@class NSString;

@interface MMFinderRefSessionBufferKey : NSObject

@property (retain, nonatomic) NSString *tid;
@property (nonatomic) int scene;
@property (retain, nonatomic) NSString *sessionExtraKey;

+ (id)keyWithTid:(id)a0 scene:(int)a1 extraKey:(id)a2;

- (void).cxx_destruct;

@end

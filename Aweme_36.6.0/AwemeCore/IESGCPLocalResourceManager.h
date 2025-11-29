@class NSBundle;

@interface IESGCPLocalResourceManager : NSObject

@property (retain, nonatomic) NSBundle *bundle;

+ (id)shareInstance;

- (id)localImageWithName:(id)a0;
- (void).cxx_destruct;

@end

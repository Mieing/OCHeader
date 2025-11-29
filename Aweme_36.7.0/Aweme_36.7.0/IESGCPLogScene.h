@class NSString;

@interface IESGCPLogScene : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long status;

+ (id)sceneWithName:(id)a0 status:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)dictionaryValue;

@end

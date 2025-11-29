@class NSMutableDictionary, NSMutableArray;

@interface LolaDrawCommandFactory : NSObject

@property (retain, nonatomic) NSMutableDictionary *commandPool;
@property (retain, nonatomic) NSMutableArray *currentDrawCommands;
@property (retain, nonatomic) NSMutableArray *appendDrawCommands;

+ (id)commandClassWithKey:(id)a0;

- (void)createCommandsWithData:(id)a0 context:(id)a1 isAppend:(BOOL)a2;
- (void)recycle:(id)a0;
- (id)translateCommand:(id)a0 context:(id)a1;
- (id)getCommandFromPool:(id)a0;
- (void)doRecyleCommand:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

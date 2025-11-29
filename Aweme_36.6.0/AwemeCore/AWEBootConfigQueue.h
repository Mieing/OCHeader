@class NSString, NSMutableArray;

@interface AWEBootConfigQueue : NSObject

@property (retain, nonatomic) NSMutableArray *data;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL validExist;
@property (nonatomic) unsigned int qos;
@property (readonly) id /* block */ addTask;

- (id)initWithValidExist:(BOOL)a0 qos:(unsigned int)a1;
- (void)addTask:(id)a0;
- (void).cxx_destruct;
- (id)tasks;

@end

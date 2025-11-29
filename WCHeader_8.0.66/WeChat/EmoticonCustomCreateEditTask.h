@class NSString;

@interface EmoticonCustomCreateEditTask : EmoticonCustomCreateInternalTask

@property (copy, nonatomic) id /* block */ createFailBlock;
@property (copy, nonatomic) id /* block */ createSucBlock;
@property (retain, nonatomic) NSString *addCustomEmoticonSessionID;

- (void)startEdit;
- (void).cxx_destruct;

@end

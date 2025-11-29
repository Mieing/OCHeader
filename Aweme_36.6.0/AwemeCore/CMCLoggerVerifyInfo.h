@class NSString;

@interface CMCLoggerVerifyInfo : NSObject

@property (copy, nonatomic) NSString *time;
@property (copy, nonatomic) NSString *level;
@property (copy, nonatomic) NSString *subTag;
@property (copy, nonatomic) NSString *cmcTag;
@property (copy, nonatomic) NSString *rawFuncName;
@property (readonly, copy, nonatomic) NSString *funcName;
@property (copy, nonatomic) NSString *fileName;
@property (nonatomic) int line;
@property (copy, nonatomic) NSString *log;

+ (id)infoWithConfig:(id /* block */)a0;

- (void).cxx_destruct;

@end

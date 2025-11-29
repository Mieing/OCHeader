@class NSString;

@interface BDREWord : NSObject

@property (retain, nonatomic) NSString *wordStr;
@property (nonatomic) unsigned long long line;
@property (nonatomic) unsigned long long col;

- (id)initWordWithStr:(id)a0 line:(unsigned long long)a1 col:(unsigned long long)a2;
- (void).cxx_destruct;

@end

@class NSData;

@interface HMDMachSyntaxResult : NSObject

@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) void /* function */ *processor;

+ (id)syntaxResultWithData:(id)a0 processor:(void /* function */ *)a1 version:(unsigned long long)a2;

- (void).cxx_destruct;

@end

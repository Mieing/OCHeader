@class NSData;

@interface RPDGr1Parser : NSObject

@property (retain, nonatomic) NSData *dg1Data;

- (id)parseTd1;
- (id)parseTd2;
- (id)parseTd3;
- (id)strFromData:(unsigned long long)a0 len:(unsigned long long)a1;
- (id)getDG1Data:(id)a0;
- (void).cxx_destruct;

@end

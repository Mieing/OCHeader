@class NSString;

@interface COpenIMContactClassify : NSObject <NSCopying>

@property (nonatomic) unsigned int openResSubType;
@property (retain, nonatomic) NSString *openIMDescId;
@property (retain, nonatomic) NSString *openIMAppid;
@property (retain, nonatomic) NSString *openIMDesc;
@property (retain, nonatomic) NSString *openimDescQuanPin;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOpenIMDescId:(id)a0 andOpenIMAppid:(id)a1;
- (id)initWithOpenIMDescId:(id)a0 andOpenIMAppid:(id)a1 subType:(unsigned int)a2;
- (BOOL)isEqualContactClassify:(id)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;

@end

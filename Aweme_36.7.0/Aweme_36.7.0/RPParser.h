@class NSData;

@interface RPParser : NSObject

@property (retain, nonatomic) NSData *dgData;
@property (nonatomic) unsigned long long len;
@property (nonatomic) unsigned long long pos;
@property (nonatomic) unsigned long long curTag;

- (id)RP_ParserDGCom;
- (id)initWithDGData:(id)a0;
- (unsigned long long)RP_getNextTag;
- (unsigned long long)RP_getNextLength;
- (id)RP_getNextValue;
- (void).cxx_destruct;

@end

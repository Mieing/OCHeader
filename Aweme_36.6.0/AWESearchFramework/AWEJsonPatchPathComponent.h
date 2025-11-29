@class NSString;

@interface AWEJsonPatchPathComponent : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long upstreamType;
@property (nonatomic) BOOL isArrayIndex;
@property (nonatomic) BOOL isMutable;
@property (nonatomic) BOOL unWriteBacked;
@property (retain, nonatomic) NSString *propName;
@property (retain, nonatomic) NSString *component;
@property (retain, nonatomic) id correspondingObj;

- (void)updateType:(unsigned long long)a0 obj:(id)a1;
- (void).cxx_destruct;

@end

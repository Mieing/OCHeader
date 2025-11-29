@class NSString, LSTargetGenerator;

@interface LSMatchTypeConfig : NSObject

@property (nonatomic) unsigned int matchType;
@property (nonatomic) unsigned int matchSubType;
@property (retain, nonatomic) LSTargetGenerator *targetGenerator;
@property (retain, nonatomic) NSString *nsMatchDesc;

+ (id)matchType:(unsigned int)a0 subType:(unsigned int)a1 target:(id)a2 desc:(id)a3;

- (BOOL)applyRule:(int)a0;
- (void).cxx_destruct;

@end

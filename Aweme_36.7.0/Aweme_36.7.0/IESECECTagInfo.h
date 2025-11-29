@class NSString;

@interface IESECECTagInfo : NSObject

@property (retain, nonatomic) NSString *tagCode;
@property (retain, nonatomic) NSString *tagType;
@property (retain, nonatomic) NSString *highlightValue;

- (id)initWithTagCode:(id)a0 tagType:(id)a1 highlightValue:(id)a2;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)toDict;

@end

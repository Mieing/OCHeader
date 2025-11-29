@class NSString;

@interface IESLLCardOCRResultModel : NSObject

@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long mode;
@property (copy, nonatomic) NSString *result;

- (id)initWithStatus:(unsigned long long)a0 mode:(unsigned long long)a1 result:(id)a2;
- (void).cxx_destruct;
- (id)initWithStatus:(unsigned long long)a0;

@end

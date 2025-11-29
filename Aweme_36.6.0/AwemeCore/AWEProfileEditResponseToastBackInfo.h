@class NSString;

@interface AWEProfileEditResponseToastBackInfo : AWEBaseApiModel

@property (nonatomic) unsigned long long commitStatus;
@property (retain, nonatomic) NSString *toastMessage;
@property (nonatomic) BOOL back;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithCommitStatus:(unsigned long long)a0;
- (void).cxx_destruct;

@end

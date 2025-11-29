@class NSString, AWEIMChineseDecomposer;

@interface AWEIMPinYinSearchMatcher : NSObject <AWEIMPinYinSearchProtocol>

@property (copy, nonatomic) NSString *oriString;
@property (retain, nonatomic) AWEIMChineseDecomposer *decomposer;
@property (readonly, copy, nonatomic) NSString *pinYin;
@property (readonly, copy, nonatomic) NSString *initials;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)matcherWithString:(id)a0;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })matchRangeForKeyword:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })fullPinYinMatchRangeForKeyword:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })firstLetterMatchRangeForKeyword:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })prefixMatchRangeForKeyword:(id)a0;
- (void).cxx_destruct;

@end

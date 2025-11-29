@class NSString, NSMutableArray;

@interface AWEIMPinYinSearchObject : NSObject <AWEIMPinYinSearchProtocol>

@property (copy, nonatomic) NSString *pinYinWithoutSystemBlank;
@property (retain, nonatomic) NSMutableArray *components;
@property (copy, nonatomic) NSString *oriString;
@property (copy, nonatomic) NSString *pinYin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pinYinSearchObjectWithOriginalString:(id)a0 pinYin:(id)a1;
+ (BOOL)isCharacterPinYin:(unsigned short)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })completeCharacterRangeAtIndex:(long long)a0 inString:(id)a1;
+ (void)checkOther:(id)a0 pinYin:(id)a1 idxPinYin:(long long)a2 length:(long long)a3;
+ (BOOL)isCharacterPinYinDiacritics:(unsigned short)a0;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })matchRangeForKeyword:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })fullPinYinMatchRangeForKeyword:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })firstLetterMatchRangeForKeyword:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })prefixMatchRangeForKeyword:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

@interface RKLBlockEnumerationHelper : NSObject {
    struct { struct __CFString *regexString; unsigned long long regexHash; unsigned int options; struct uregex *icu_regex; long long captureCount; struct __CFString *setToString; unsigned long long setToHash; long long setToLength; unsigned char setToIsImmutable : 1; unsigned char setToNeedsConversion : 1; unsigned short *setToUniChar; struct _NSRange { unsigned long long location; unsigned long long length; } setToRange; struct _NSRange { unsigned long long location; unsigned long long length; } lastFindRange; struct _NSRange { unsigned long long location; unsigned long long length; } lastMatchRange; struct *buffer; } cachedRegex;
    struct { struct __CFString *string; unsigned long long hash; long long length; unsigned short *uniChar; } buffer;
    void *scratchBuffer[5];
    unsigned char needToFreeBufferUniChar : 1;
}

- (id)initWithRegex:(id)a0 options:(unsigned int)a1 string:(id)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 error:(id *)a4;
- (void)dealloc;

@end

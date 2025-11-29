@class NSString;

@interface AWEIMSearchResultConvertorCellTextInfo : NSObject

@property (copy, nonatomic) NSString *firstLine;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } firstLineRange;
@property (copy, nonatomic) NSString *secondLine;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } secondLineRange;

- (void).cxx_destruct;

@end

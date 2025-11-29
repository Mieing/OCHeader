@class NSString;

@interface IESLiveEmoticonMatchingResult : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (copy, nonatomic) NSString *emoticonImageName;
@property (copy, nonatomic) NSString *representationString;

- (void).cxx_destruct;

@end

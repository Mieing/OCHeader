@class NSURL, NSString;

@interface WNTextUrlData : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *linkStr;

- (void).cxx_destruct;

@end

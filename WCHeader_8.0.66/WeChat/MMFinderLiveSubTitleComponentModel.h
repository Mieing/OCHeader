@class NSString;

@interface MMFinderLiveSubTitleComponentModel : NSObject

@property (copy, nonatomic) NSString *content;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } componentRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } displayedRange;
@property (nonatomic) unsigned long long componentTag;

- (id)getDisplayStr;
- (void).cxx_destruct;

@end

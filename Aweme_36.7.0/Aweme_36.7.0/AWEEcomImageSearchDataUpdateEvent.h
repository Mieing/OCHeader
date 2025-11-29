@interface AWEEcomImageSearchDataUpdateEvent : NSObject

@property (nonatomic) long long optType;
@property (nonatomic) long long section;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

@end

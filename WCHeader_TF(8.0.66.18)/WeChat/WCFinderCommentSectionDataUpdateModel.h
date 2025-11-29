@interface WCFinderCommentSectionDataUpdateModel : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } insertRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } deleteRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } updateRange;
@property (nonatomic) BOOL forceUpdate;

@end

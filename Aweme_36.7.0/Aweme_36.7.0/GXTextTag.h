@class GXTextTagModel;

@interface GXTextTag : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (retain, nonatomic) GXTextTagModel *model;

- (void).cxx_destruct;

@end

@class NSString;

@interface OMJEmojiInfo : NSObject

@property (readonly, nonatomic) NSString *content;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rangeU16;
@property (readonly, nonatomic) NSString *filePath;

- (id)initWithContent:(id)a0 rangeU16:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 filePath:(id)a2;
- (id)description;
- (void).cxx_destruct;

@end

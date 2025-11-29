@class NSString;

@interface IESLiveInteractSubtitleForShow : NSObject <NSCopying>

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *userid;
@property (nonatomic) BOOL empty;
@property (nonatomic) BOOL definite;
@property (nonatomic) long long line;

- (id)getCopy;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

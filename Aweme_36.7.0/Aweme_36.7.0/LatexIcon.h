@class NSString;

@interface LatexIcon : NSObject

@property struct shared_ptr<tex::TeXIcon> { struct TeXIcon *__ptr_; struct __shared_weak_count *__cntrl_; } texIcon;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) long long iconDepth;
@property (readonly, nonatomic) double baseline;
@property (readonly, nonatomic) NSString *speechText;
@property (readonly, nonatomic) NSString *texContent;

- (void).cxx_destruct;
- (id).cxx_construct;

@end

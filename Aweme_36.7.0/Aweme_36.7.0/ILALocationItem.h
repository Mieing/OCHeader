@class NSString;

@interface ILALocationItem : NSObject

@property (nonatomic) struct shared_ptr<ILASDK::LocationItem> { struct LocationItem *__ptr_; struct __shared_weak_count *__cntrl_; } originLocationItem;
@property (copy, nonatomic) NSString *locationID;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *asciName;
@property (copy, nonatomic) NSString *localID;
@property (copy, nonatomic) NSString *typeCode;
@property (nonatomic) long long distance;

- (id)initWithOriginLocationItem:(struct shared_ptr<ILASDK::LocationItem> { struct LocationItem *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<ILASDK::LocationItem> { struct LocationItem *x0; struct __shared_weak_count *x1; })getTargetLocationItem;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

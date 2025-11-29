@class NSString, NSArray;

@interface ILASearchTag : NSObject

@property (copy, nonatomic) NSString *showName;
@property (copy, nonatomic) NSString *originName;
@property (nonatomic) int assetCount;
@property (retain, nonatomic) NSArray *tagList;

- (id)initWithOriginSearchTag:(struct shared_ptr<ILASDK::SearchTag> { struct SearchTag *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;

@end

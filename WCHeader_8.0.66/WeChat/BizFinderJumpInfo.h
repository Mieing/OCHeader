@class NSNumber, BizFinderLiveInfo, NSArray;

@interface BizFinderJumpInfo : NSObject

@property (retain, nonatomic) NSNumber *scene;
@property (retain, nonatomic) BizFinderLiveInfo *targetInfo;
@property (copy, nonatomic) NSArray *allInfoList;

+ (id)makeWithScene:(id)a0 targetInfo:(id)a1 allInfoList:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
